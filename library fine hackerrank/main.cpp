#include <iostream>

using namespace std;

class Date
{

public:
    int date;
    int month;
    int year;
    Date(){
    }
    Date(int d,int m,int y)
    {
       date=d;
       month=m;
       year=y;

    }
};

int main()
{
    int date,month,year;
    cin>>date>>month>>year;
    Date returned= Date(date,month,year);
     cin>>date>>month>>year;
    Date due= Date(date,month,year);

    int fine=0;

    if(returned.year==due.year&&returned.month==due.month&&returned.date!=due.date){
        int diff=returned.date-due.date;

        fine=diff*15;
    }
    else if(returned.year==due.year&&returned.month!=due.month){
        int diff=returned.month-due.month;

        fine=diff*500;
    }
    else if(returned.year!=due.year){
        int diff=returned.year-due.year;

        fine=diff*1000;
    }
    else if(returned.year==due.year&&returned.month==due.month&&returned.date<due.date){
        fine=0;
    }

    cout<<fine;
    return 0;
}
