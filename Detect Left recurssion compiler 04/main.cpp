#include <iostream>

using namespace std;

int main()
{
    string str;
    getline(cin,str);
    if(str[0]>= 'A' && str[0]=< 'Z' &&str[1]== '-' &&str[2]=='>')
    {
        if(str[3]==str[0]){
            cout<< "Left Recursion"<<endl;
            return;
        }
        for(int i=4; i<str.size(); i++)
        {
            if(str[i]=='|'&&str[i+1]==str[0]){
                cout<< "Left Recursion"<<endl;

                return;
            }

        }
    }
    else
    {
        cout<< "Not Production"<<endl;
    }
    cout<< "Not Left Recursion"<<endl;



    return 0;
}
