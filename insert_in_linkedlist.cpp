#include<iostream>
using namespace std;

struct Node{
  
    int data;
    Node *next;
};
Node *head=NULL;


void insert(int x){
    Node *newNode= new Node;
    newNode->data =x;
    newNode->next= head;
    head= newNode;

}
void insertAE(int x){
    Node *newNode=new Node;
    newNode->data=x;
    newNode->next=NULL;
    
    Node *temp=head;



    while(temp->next !=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}

void insertAtPos(int pos,int x){
    Node *newNode =new Node;
    newNode->data=x;

    if(pos==1){
        newNode->next=head;
        head=newNode;
        return;
    }
    Node *temp=head;
    for(int i=1;i<pos-1 && temp !=NULL;i++){
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}

void show(){
    Node *temp=head;
    cout<<"\nElement pf linkedlist\n";
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\nendl of linked list "<<endl;
}


int main(){
  insert(11);
    insertAE(100);
    insert(12);
    insert(13);
    insert(14);
    insert(15);
    show();
    insertAtPos(3,22);
    show();
    insertAtPos(5,555);
    show();
    insertAE(101);
    show();
    insert(16);
    insert(17);
    show();
    insertAE(102);
    show();

    


    return 0;
}