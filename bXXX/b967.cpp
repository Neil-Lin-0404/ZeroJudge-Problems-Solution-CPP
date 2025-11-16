#include <bits/stdc++.h>
using namespace std;
const int MAX = 100000 ;
vector<vector<int>>g(MAX);
bool visited[MAX] = {false};

pair<int,int> pa = {0,0};
void dfs(int node,int range)
{
    visited[node] = true;
    for(auto it : g[node])
    {
        if(visited[it])continue;
        dfs(it,range+1);
    }
    if(pa.second < range)
    {
        pa.second = range;
        pa.first = node;
    }
    
}
int main()
{
    int edge;cin >> edge;
    for(int i=0;i<edge-1;i++)
    {
        int a,b;cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    dfs(0,0);
    fill(visited,visited+edge+1,false);
    dfs(pa.first,0);
    cout << pa.second;
    return 0;
}