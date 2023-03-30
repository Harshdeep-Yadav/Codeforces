/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>
using namespace std;

int main()
{
    int logs,langs;
    cin>>logs>>langs;
    unordered_map <int,vector <int>> logstolang;
    unordered_map <int,vector <int>> langstologs;
    vector <int> visited;
    for(int i=0;i<logs;i++)
    {
        visited.push_back(0);
        vector <int> v;
        int nm;
        cin>>nm;
        for(int j=0;j<nm;j++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        logstolang[i+1]=v;
    }
    for(int j=0;j<langs;j++)
    {
       vector <int> v;
       langstologs[j+1]=v;
    }
    for(auto i: logstolang)
    {
        for(auto j : i.second)
        {
            langstologs[j].push_back(i.first);
        }
    }
    int tot_visited=0;
    int comp=0;
    while(tot_visited<logs)
    {
        stack <int> s;
        int i=0;
        while(visited[i]!=0)
         i++;
        s.push(i+1);
        visited[i]=1;
        tot_visited++;
        while(!s.empty())
        {
            if(logstolang[s.top()].size()==0)
            {
                s.pop();
            }
            else
            {
                int x=s.top();
                s.pop();
                for(auto j: logstolang[x])
                {
                    for(auto k: langstologs[j])
                    {
                        if(visited[k-1]==0)
                        {
                            s.push(k);
                            visited[k-1]=1;
                            tot_visited++;
                        }
                    }
                }
            }
        }
        comp++;
    }
    cout<<comp-1<<endl;
    return 0;
}