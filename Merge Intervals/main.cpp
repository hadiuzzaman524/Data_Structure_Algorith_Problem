/*
#include <bits/stdc++.h>

using namespace std;
class Time
{
public:
    int starting;
    int ending;

    Time()
    {
    }

    Time(int s,int t)
    {
        starting=s;
        t=ending;
    }
};

int comparefun(Time a,Time b)
{

    if(a.starting!=b.starting)
    {
        return a.starting<b.starting;
    }
    else if(a.ending !=b.ending)
    {
        return a.ending<b.ending;
    }

}

int main()
{
    freopen("input2.txt","r",stdin);

    int n;
    cin>>n;
    Time arr[n];
    for(int i=0; i<n; i++)
    {

        int s,t;
        cin>> s>>t;
        arr[i].starting=s;
        arr[i].ending=t;
    }

    sort(arr,arr+n,comparefun);


    int i=0;
    while(i<n-1)
    {
        if(arr[i].ending>=arr[i+1].starting)
        {
            cout<<"("<<arr[i].starting<< " "<<arr[i+1].ending<< ") ";
            i+=1;

        }
        else
        {
           cout<<"("<< arr[i+1].starting<< " "<<arr[i+1].ending<< ") ";
            i++;
        }
    }


    return 0;
}
*/

#include <bits/stdc++.h>

using namespace std;


vector< vector<int> >newv;
int temp;

void marge(vector<int> a,vector<int> b)
{
    int a1=a[0];
    int a2=a[1];

    int b1=b[0];
    int b2=b[1];


    //  cout<< "("<<a1<<" "<< a2<< ")" << "(" <<b1<< " "<< b2<< ") ";
    if(b1<=a2)
    {
        cout<<"("<<a1<<" "<< b2<< ") ";
    }
   // cout<< temp<< " "<< b2<<endl;
   else if(temp!=b2)
    {
        cout<< "("<<a1<<" "<< a2<< ")" << "(" <<b1<< " "<< b2<< ") ";
    }
      temp=b2;
}
int main()
{

    vector< vector<int> > intervals=
    {
        // {1,4},{5,6}
        {1,3},{2,6},{8,10},{15,18}
    };

 temp=6;


    sort(intervals.begin(),intervals.end());


    if(intervals.size()==1)
    {

        newv.push_back({intervals[0][0],intervals[0][1]});

    }
    else
    {
        for(int i=0; i<intervals.size()-1; i++)
        {

            marge(intervals[i],intervals[i+1]);
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

