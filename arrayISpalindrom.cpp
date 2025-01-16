#include<iostream>
using namespace std;
int main(){
    int c=0;
    int arr[5];
    int len=sizeof(arr);
    for(int i=0;i<len;i++){
     cin>>arr[i];
    }
     for(int i=0;i<len;i++){
        for(int j=len-1;j>=0;j--){
            if(arr[i]!=arr[j]){
                cout<<"array is not palindrom";
                c++;

            }
        }
        if(c==0){
            cout<<"array is palindrome";
        }

     }
    return 0;
}