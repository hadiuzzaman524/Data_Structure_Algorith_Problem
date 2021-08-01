#include <iostream>

using namespace std;

typedef struct mylist
{

    int data;
    struct mylist *next;

} node;
node *head= new node;

void insertIntoList(node *s, int data)
{

    while(s->next!=NULL)
    {
        s=s->next;
    }
    // s->next=(node*)malloc(sizeof(node));
    s->next=new node;
    s->next->data=data;
    s->next->next=NULL;

}

void display(node *s)
{

    while(s->next!=NULL)
    {
        cout<< s->next->data<< " ";
        s=s->next;
    }
}

void searchInList(node *s,int searchItem)
{
    int c=0;

    while(s->next!=NULL)
    {

        if(s->next->data==searchItem)
        {
            c++;
        }
        s=s->next;
    }

    cout<< "Number of "<< searchItem<< " here "<< c << " times" <<endl;
}

void deleteNode(node *s, int data)
{

    while(s->next!=NULL)
    {
        if(s->next->data==data)
        {
            s->next=s->next->next;
        }
        s=s->next;
    }
}

void reverseList()
{

    node *p=head;
    node *r,*q;
    r=NULL;
    q=NULL;


    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }

    head=q;

}

void insertFirst(int x)
{

    node *newData=new node;
    newData->data=x;
    newData->next=head;
    head=newData;
}
int listLength(node *s)
{
    int c=0;

    while(s->next!=0)
    {
        c++;
        s=s->next;
    }
    return c;
}

void insertMiddle(node *s, int data)
{

    int len= listLength(s);
    len=len/2;
    node *starting;
    starting=s;

    node *breaking;
    int c=0;
    while(s!=NULL)
    {

        if(c<=len)
        {
            s=s->next;

        }
        else
        {
            breaking=s;
            break;
        }
        c++;

    }

    node *mydata=new node;
    mydata->data=data;
    mydata->next=breaking;
    int k=0;

  node *x;
  x=starting;
  while(len--){
    starting=starting->next;
  }

  starting->next=mydata;


  while(x->next!=NULL){
    cout<< x->next->data<< " ";
    x=x->next;
  }



}

int main()
{
    //node *head= (node*)malloc(sizeof(node));

    head->next=NULL;
    insertIntoList(head,5);
    insertIntoList(head,6);
    insertIntoList(head,33);
    insertIntoList(head,44);
    insertIntoList(head,44);
    insertIntoList(head,553);
    display(head);
    cout<<endl;
    insertMiddle(head,77);
    // searchInList(head,10);

    return 0;
}
