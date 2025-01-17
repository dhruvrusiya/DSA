#include<iostream>
using namespace std;

class Node{
    public:
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
    insert(22);
    show();

    return 0;
}