#include <bits/stdc++.h>

using namespace std;

int main()
{

    int vertex;
    int edge;


    cin>>vertex>>edge;
    map<int,vector<int> > graph;


    for(int i=0; i<edge; i++){
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    cout<< graph.size();






    return 0;
}
