#include <iostream>
using namespace std;

bool prime(int n)
{
    if (n <= 1) return false;  // 0 and 1 are not prime numbers
    if (n == 2) return true;   // 2 is the only even prime number
    if (n % 2 == 0) return false; // Even numbers greater than 2 are not prime numbers
    for (int i = 3; i <= n/2; i += 2) 
    {
        if (n % i == 0)
        {
            return false; 
        }
    }
    return true;
}
int main()
{
    int n;
    cout <<"Enter the number to be checked: ";
    cin >> n;
    if (prime(n)) 
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}
