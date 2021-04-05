#include <iostream>

using namespace std;

typedef struct mylist{

int data;
struct mylist *next;

}node;

void insertIntoList(node *s, int data){

    while(s->next!=NULL){
        s=s->next;
    }
   // s->next=(node*)malloc(sizeof(node));
   s->next=new node;
    s->next->data=data;
    s->next->next=NULL;

}

void display(node *s){

    while(s->next!=NULL){
        cout<< s->next->data<< " ";
        s=s->next;
    }
}

void searchInList(node *s,int searchItem){
    int c=0;

    while(s->next!=NULL){

        if(s->next->data==searchItem){
            c++;
        }
        s=s->next;
    }

    cout<< "Number of "<< searchItem<< " here "<< c << " times" <<endl;
}

int main()
{
    //node *head= (node*)malloc(sizeof(node));
    node *head= new node;
    head->next=NULL;
    insertIntoList(head,5);
    insertIntoList(head,6);
    insertIntoList(head,33);
    insertIntoList(head,44);
    insertIntoList(head,44);
    insertIntoList(head,553);
    display(head);
    cout<<endl;
    searchInList(head,10);

// 5->6->33->44->553

    return 0;
}
