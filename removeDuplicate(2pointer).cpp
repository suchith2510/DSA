#include<iostream>
using namespace std;
int duplicate(int arr[], int n)
{
	int i = 0;
    for (int j = 1; j < n; j++) {
     if (arr[i] != arr[j]) {
      i++;
      arr[i] = arr[j];
    }
  }
  return i + 1;
}
int main(){
	int n,i;
	cout<<"Enter array size";
	cin>>n;
	int arr[n];
	cout<<"Enter array elements";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	int k=duplicate(arr,n);
	for(i=0;i<k;i++){
		cout<<arr[i]<<" ";
	}
}
