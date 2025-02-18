#include<iostream>
using namespace std;
int highestCommonFactor(int a, int b)
{	
	while(a>0&&b>0)
	{
		if(a>b)
		{
			a=a%b;
		}
		else
		{
			b=b%a;
		}
	}
	return a+b;
}
int main()
{
	int a,b;
	cout<<"Enter 2 numbers"<<endl;
	cin>>a>>b;
	cout<<highestCommonFactor(a,b);
}
