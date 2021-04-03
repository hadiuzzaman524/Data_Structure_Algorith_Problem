#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector< vector<int> > intervals=
    {
       // {1,4},{5,6}
       {1,3},{2,6},{8,10},{15,18}
    };

    vector< vector<int> >newv;


    sort(intervals.begin(),intervals.end());


    if(intervals.size()==1)
    {

        newv.push_back({intervals[0][0],intervals[0][1]});

    }
    else
    {
        for(int i=0; i<intervals.size()-1; i++)
        {
            for(int j=0; j<intervals[i].size()-1; j++)
            {

                if(intervals[i][j+1]>=intervals[i+1][j])
                {
                    newv.push_back({intervals[i][j],intervals[i+1][j+1]});
                }
                else
                {


                    newv.push_back({intervals[i+1][j],intervals[i+1][j+1]});
                }

            }
        }
    }

    for(int i=0; i<newv.size(); i++)
    {
        for(int j=0; j<newv[i].size(); j++)
        {
            cout<< newv[i][j]<< " ";
        }
        cout<<endl;
    }


    return 0;
}
