#include<iostream>
using namespace std;
bool palindrome(int x){
    if(x<0){ return false;}
    int temp=x,digit;
    long int rev=0;
    while(temp>0)
    {
        digit=temp%10;
        temp=temp/10;
	    rev=rev*10+digit;
    }
	return x==rev;
}
int main()
{
    int x;
    cout<<"Enter a number";
    cin>>x;
    if(palindrome(x)){
    	cout<<"true";
	}
	else{
		cout<<"false";
	}
}
