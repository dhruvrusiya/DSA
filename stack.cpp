#include<iostream>
using namespace std;
int stack[5],n=5,top=-1;

void push(int a){
    if(top==n-1){
        cout<<"stack is full/over flow"<<endl;

    }else{
        top++;
        stack[top]=a;
    }
}

void display(){
    for(int i=top;i>=0;i--){
        cout<<stack[i]<<endl;
        }
}


int main(){
    push(11);
    display();
    push(12);
    push(13);
    push(14);
    push(15);
    display();


    return 0;
}



