#include<iostream>
using namespace std;
int main(){
   int arr[]={1,5,2,3,6,8,9,7,4,1,1};
   int len=sizeof(arr)/4;

   for(int i=0;i<len-1;i++){
    for(int j=i+1;j<len;j++){
        if(arr[i]>arr[j]){
            int t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
        }
    }
   }

for(int i=0;i<len;i++){
    cout<<arr[i];}
   

   


    return 0;
}