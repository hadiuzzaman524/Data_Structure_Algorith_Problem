#include <bits/stdc++.h>

using namespace std;

typedef struct
{
    int date;
    int month;
    int year;
    string title;
} birthday;


int compare(birthday a,birthday b){


    if(a.month!=b.month)
        return a.month<b.month;
    else if(a.date!=b.date)
        return a.date<b.date;
    else
        return a.year<b.year;
}

int main()
{
    freopen("input.txt","r",stdin);

    birthday arr[4];

    for(int i=0; i<4; i++)
    {
        int date,month,year;
        string title;
        cin>>date>>month>>year;
        getline(cin,title);
        arr[i].date=date;
        arr[i].month=month;
        arr[i].year=year;
        arr[i].title=title;
    }

    sort(arr,arr+4,compare);

    for(int i=0; i<4; i++)
    {
        cout<< arr[i].date<< "-"<<arr[i].month<< "-"<<arr[i].year<<" - "<<arr[i].title<<endl;
    }

    return 0;
}
