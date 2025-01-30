#include<iostream>
using namespace std;

void bbl_sort(int arr[],int s){
    for(int i=0;i<s;i++){
        for (int j=i+1;j<s;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}



int main(){
    return 0;
}