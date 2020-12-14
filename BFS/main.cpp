#include <bits/stdc++.h>
using namespace std;

void BFS(vector<int>adjacentList[],int node,int source)
{

    queue<int> q;
    bool visited[node+1]= {false};
    visited[source]=true;
    q.push(source);

    while(!q.empty())
    {
        int top= q.front();
        cout<<top<< " ";
        q.pop();

        for(int i=0; i<adjacentList[top].size(); i++)
        {
            int temp=adjacentList[top][i];

            if(visited[temp]==false)
            {
                visited[temp]=true;
                q.push(temp);

            }
        }

    }

}

int main()
{
    freopen("input2.txt","r",stdin);

    int vertex,edge;
    //cout<< "How many vertex and edge are there? ";
    cin>>vertex>>edge;

    vector<int>adjacentLint[vertex];

    for(int i=0; i<edge; i++)
    {
        int a,b;
        cin>>a>>b;
        adjacentLint[a].push_back(b);
        adjacentLint[b].push_back(a);
    }

    /*  for(int i=0; i<vertex; i++){
           cout<< i<<": ";
       for(int j=0; j<adjacentLint[i].size(); j++){
           cout<<adjacentLint[i][j]<< "- ";
       }
       cout<<endl;

      }*/

    BFS(adjacentLint,vertex,0);

    return 0;
}
