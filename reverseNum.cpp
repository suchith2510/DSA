#include <iostream>
using namespace std;
int main() {
 int n,rev=0;
 cout<<"Enter any number";
 cin>>n;
 while(n>0)
 {
    int digit=n%10;
    n=n/10;
    rev=rev*10+digit;
 }
 cout<<"Reversed number is: "<<rev;
    return 0;
}