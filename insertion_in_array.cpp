// code done by dhruv
#include <iostream>
using namespace std;
int main(){
	int n=10;
	int arr[10];
	int a=10;
	for(int i=0;i<n;i++){
		arr[i]=a;
		a+=10;
	}
	int *p;
	p=arr;
	for(int i=0;i<n;i++){
		cout<<"index "<<i<<" = ";
		cout<<arr[i];
		cout<<"address ="<<p<<endl;
		
     p++;
	}
	


return 0;
}
