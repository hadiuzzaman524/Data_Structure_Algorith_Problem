#include <iostream>

using namespace std;

typedef struct mylist{

    int data;
    struct mylist *left;
    struct mylist *right;

}node;
node *head=NULL;


void insertIntoList(int data){

    node *temp=new node;
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;

    if(head==NULL){
        head=temp;
    }
    else{

      node *p;
      p=head;

      while(p->right!=NULL){
        p=p->right;
      }

      p->right=temp;
      temp->left=p;

    }


}

void insertBegin(int data){

    node *temp=new node;
    temp->left=NULL;
    temp->right=NULL;
    temp->data=data;

    if(head==NULL){
       head=temp;
    }else{

      temp->right=head;
      head->left=temp;
      head=temp;
    }


}

void display(node *s){

    while(s!=NULL){
        cout<< s->data<< " ";
        s=s->right;
    }
    cout<<endl;
}


int main()
{
    insertIntoList(55);
    insertIntoList(56);
    insertIntoList(57);
    display(head);
    insertBegin(88);
    insertBegin(200);
    insertIntoList(500);
 display(head);
    return 0;
}
