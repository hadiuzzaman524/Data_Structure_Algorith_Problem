#include <bits/stdc++.h>

using namespace std;
map<string,int> level;

void bfs(map<string,vector<string> > graph, string src)
{

    queue<string> q;
    map<string,bool> visited;
    q.push(src);
    visited[src]=true;
    level[src]=0;

    while(!q.empty())
    {
        string top=q.front();

        for(string x:graph[top])
        {
            if(!visited[x])
            {
                visited[x]=true;
                level[x]=level[top]+1;
                q.push(x);
            }
        }
        q.pop();
    }

}

int printLevel(string u,string v)
{
    map<string, int> ::iterator it;

    for(it=level.begin(); it!=level.end(); it++)
    {
        if(it->second!=0)
        {
            if(it->first==v)
            {
                return it->second;
            }

        }


    }

    return 0;
}

int main()
{

freopen("input.txt","r",stdin);
    int t;
    cin>>t;
    int caseno=1;
    cout<< "SHIPPING ROUTES OUTPUT"<<endl<<endl;
    while(t--)
    {
        int n,m,p;
        cin>>n>>m>>p;

        string x;
        for(int i=0; i<n; i++)
        {
            cin>>x;
        }

        map<string,vector<string> > graph;

        for(int i=0; i<m; i++)
        {
            string u,v;
            cin>> u>> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }



        cout<< "DATA SET  "<<caseno++<<endl<<endl;
        for(int i=0; i<p; i++)
        {
            int cost;
            string u,v;
            cin>> cost>> u>> v;
            bfs(graph,u);
            int x=printLevel(u,v);
            if(x==0)
            {
                cout<< "NO SHIPMENT POSSIBLE"<<endl;
            }
            else
            {
                cout<<"$"<< x*cost*100<<endl;
            }
            level.clear();
        }
        cout<<endl;


    }
    cout<< "END OF OUTPUT"<<endl;
    return 0;
}
