#include <bits/stdc++.h>
using namespace std;


void bfs(map<int, vector<int> > graph, int source)
{
    queue<int> q;
    map<int,bool> visited;
    q.push(source);
    visited[source]=true;

    while(!q.empty())
    {
        int top=q.front();
        q.pop();
        cout<< top<< " ";
        for(int x:graph[top])
        {
            if(visited[x]==false)
            {
                visited[x]=true;
                q.push(x);
            }
        }
    }
}
int main()
{
    freopen("input.txt","r",stdin);

    int node,edge;
    // cout<< "how many node and edges? ";
    cin>> node>>edge;

    map<int, vector<int> > graph;

    for(int i=0; i<edge; i++)
    {
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    bfs(graph,1);

    return 0;
}
