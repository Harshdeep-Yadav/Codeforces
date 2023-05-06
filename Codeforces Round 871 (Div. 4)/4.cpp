#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m;
vector<vector<int>> grid;
vector<vector<bool>> vis;

// Define directions for traversing the grid
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

// Define a struct to represent a cell in the grid
struct Cell {
    int x, y, depth;
};

// Define a comparator for the priority queue used in BFS
struct Comparator {
    bool operator()(const Cell& a, const Cell& b) {
        return a.depth > b.depth;
    }
};

// BFS function to find the volume of a lake starting at a given cell
int bfs(int x, int y) {
    int volume = 0;
    priority_queue<Cell, vector<Cell>, Comparator> pq;
    pq.push({x, y, grid[x][y]});
    vis[x][y] = true;
    
    while (!pq.empty()) {
        Cell curr = pq.top();
        pq.pop();
        volume += curr.depth;
        
        for (int i = 0; i < 4; i++) {
            int nx = curr.x + dx[i];
            int ny = curr.y + dy[i];
            
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && !vis[nx][ny] && grid[nx][ny] > 0) {
                vis[nx][ny] = true;
                pq.push({nx, ny, grid[nx][ny]});
            }
        }
    }
    
    return volume;
}

// Main function to solve the problem
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        cin >> n >> m;
        grid = vector<vector<int>>(n, vector<int>(m));
        vis = vector<vector<bool>>(n, vector<bool>(m, false));
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        
        int maxVolume = 0;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!vis[i][j] && grid[i][j] > 0) {
                    maxVolume = max(maxVolume, bfs(i, j));
                }
            }
        }
        
        cout << maxVolume << endl;
    }
    
    return 0;
}
