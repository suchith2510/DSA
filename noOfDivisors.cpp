//AVERAGE CASE
#include<iostream>
using namespace std;
int* divisor(int n, int &size){
	int i,count=0;
	int* arr=new int[n];
	for(i=1;i<=n;i++){
		if(n%i==0){
			arr[count++]=i;
		}
	}
	size=count;
	return arr;
}
int main(){
	int n;
	cout<<"Enter a number";
	cin>>n;
	int size;
	int* arr=divisor(n,size);
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	delete[] arr;
	return 0;
}
