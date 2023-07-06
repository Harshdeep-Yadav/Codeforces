#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n, m, d;
    std::cin >> n >> m >> d;

    std::vector<std::vector<int>> matrix(n, std::vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cin >> matrix[i][j];
        }
    }

    std::vector<int> flattened;
    for (const auto &row : matrix)
    {
        flattened.insert(flattened.end(), row.begin(), row.end());
    }

    std::sort(flattened.begin(), flattened.end());

    int median = flattened[flattened.size() / 2];
    int moves = 0;

    for (const auto &element : flattened)
    {
        int diff = std::abs(element - median);
        if (diff % d != 0)
        {
            std::cout << "-1" << std::endl;
            return 0;
        }
        moves += diff / d;
    }

    std::cout << moves << std::endl;

    return 0;
}
