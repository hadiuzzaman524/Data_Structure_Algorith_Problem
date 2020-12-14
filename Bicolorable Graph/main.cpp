#include <bits/stdc++.h>

using namespace std;

#define white 1
#define black 2
#define red 3

bool colorAble(vector<int>adjacentList[],int node,int source){

queue<int> q;
//int color[node]={Color.white};

int color[node]={white};
q.push(source);
color[source]=red;

while(!q.empty()){
    int u=q.front();
    q.pop();
    cout<< u<< " ";

    for(int i=0; i<adjacentList[u].size(); i++){

        int v=adjacentList[u][i];

        if(color[v]==white){

                if(color[u]==red){
                    color[v]=black;
                }
                else{
                    color[v]=red;
                }
        q.push(v);


        }
        if(color[v]==color[u]){
            return false;
        }
    }
}


return true;
}

int main()
{

    freopen("input.txt","r",stdin);

    int node,edge;
    cin>>node>>edge;

    vector<int> adjacentList[node];

    for(int i=0; i<edge; i++)
    {
        int a,b;
        cin>> a>> b;
        adjacentList[a].push_back(b);
        adjacentList[b].push_back(a);

    }

    bool iscolor=colorAble(adjacentList,node,0);
    if(iscolor==true){
        cout<< "true";
    }else{
    cout<< "false";
    }

    return 0;
}
