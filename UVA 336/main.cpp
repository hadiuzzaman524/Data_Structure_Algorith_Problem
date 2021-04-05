#include <bits/stdc++.h>

using namespace std;



int bfs(map<int,vector<int> > graph,int source,int cmp)
{
     map<int,int> visited;
    queue<int> q;
    q.push(source);
    visited[source]=0;

    int c=0;
    while(!q.empty())
    {
        int top=q.front();
        for(int i=0; i<graph[top].size(); i++)
        {
            int x=graph[top][i];
            if(!visited.count(x))
            {
                visited[x]=visited[top]+1;
                q.push(x);
                if(visited[x]>cmp)
                    c++;

            }
        }
        q.pop();
    }
    return c+=graph.size()-visited.size();
}

int main()
{
    freopen("input.txt","r",stdin);
    int edges;

    int caseno=1;


    while(cin>>edges)
    {
        if(edges==0)
            break;
        map<int,vector<int> > graph;
        for(int i=0; i<edges; i++)
        {
            int u,v;
            cin>>u>>v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        int src,ttl;

        while(cin>>src>>ttl)
        {
           // visited.clear();
            if(src==0&&ttl==0)
                break;

            int reachable= bfs(graph,src,ttl);

            cout<< "Case "<<caseno++<<": "<< reachable<< " nodes not reachable from node "<< src<< " with TTL = "<<ttl<<"."<<endl;


        }
    }
    return 0;
}
