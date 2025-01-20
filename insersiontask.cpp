#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};
Node *head =NULL;
void insertaf(int x){
    Node *newNode= new Node;
    newNode->data=x;
    newNode->next=head; 
    head=newNode;
}

void insertae(int x){
    Node *newNode =new Node;
    newNode->data=x;
    newNode->next=NULL

    Node *temp=head;
    
    while(temp->next !=NULL){
        temp=temp->next;

    }
    temp->next=newNode;
    


}



int main(){
    insertaf(11);
    insertaf(12);
    insertae(25);
    return 0;
}