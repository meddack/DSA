#include <iostream>
using namespace std;

bool chkPrime(int n)
{
    for (int i = 2; i < n; i++)
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
    cout << "enter no. : ";
    cin >> n;
    if (chkPrime(n))
    {
        cout << "yes, prime no.";
    }
    else
        cout << "no, not prime" << endl;
}
