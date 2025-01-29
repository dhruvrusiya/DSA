#include <iostream>
using namespace std;
struct Node{
    int data;
    Node * next;
   
};
Node * head = NULL;
void insert(int x)
{
    Node *newNode = new Node;
    newNode->data = x;
   
    if(head == NULL)
    {
        head = newNode;
        newNode->next = head;
    }
    else
    {
        Node *temp = head;
        while(temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
        head = newNode;
       
    }
   
}
void show()
    {
        cout<<"data is here: "<<endl;
        Node *temp = head;
        while(temp->next != head)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<temp->data<<" ";
    }
   

int main()
{
    insert(11);
    insert(12);
    insert(13);
    insert(14);
    insert(15);
     insert(16);
    insert(17);
    insert(18);
    insert(19);
    insert(20);
    show();
   
       return 0;
}