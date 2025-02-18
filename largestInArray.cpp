#include<iostream>
using namespace std;
int largest(int arr[], int n) {
    int largest=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    return largest;
}
int main()
{	
    int n;
    cout<<"Enter array size";
    cin>>n;
	int arr[n];
	cout<<"Enter array elements";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
 	cout<<largest(arr,n);
}
