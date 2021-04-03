#include <iostream>

using namespace std;

int stringlen(char str[])
{
    int len=0;

    for(int i=0; str[i]!='\0'; i++)
    {
        len++;
    }

    return len;
}

char *stringcopy(char str[])
{

    char *temp=(char*) malloc(stringlen(str)* sizeof(char));

    int k=0;

    for(int i=0; str[i]!='\0'; i++)
    {
        temp[k]=str[i];
        k++;
    }

    temp[k]='\0';

    return temp;
}

int indexAt(char str[], char a)
{

    int index=0;

    for( int i=0; str[i]!='\0'; i++)
    {

        if(str[i]==a)
        {
            index=i;
            break;
        }

    }

    return index;
}

void lower(char str[]){

    for(int i=0; str[i]!='\0'; i++){
        //int temp=str[i]+32;
       // cout<< char(temp)<< " ";
        cout<< char(int(str[i])+32);
    }

    cout<<endl;
}

int main()
{
    // int ar[10]={10,45,343};

    char str[10000]= {'J','U','E','N','A','\0'};


    int x=stringlen(str);
    cout<< "Length of our string is: "<<x<<endl;

    char *str2= stringcopy(str);
    for(int i=0; str2[i]!='\0'; i++)
        cout<< str2[i];

    cout<<endl;
    int index= indexAt(str,'A');
    cout<< "Index is: "<<index<<endl;

   lower(str2);


    return 0;
}
