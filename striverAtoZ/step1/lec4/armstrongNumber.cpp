#include <iostream>
using namespace std;

bool armstrongNumber(int n)
{
    int temp = n;
    int sum = 0;
    while (temp != 0)
    {
        int digit = temp % 10;
        sum += pow(digit, 3);
        temp /= 10;
    }
    if (sum == n)
    {
        return true;
    }
    return false;
}
int main()
{
    int n;
    cout << "Enter no. to check for armstrong: ";
    cin >> n;
    if (armstrongNumber(n))
    {
        cout << "YES, Armstrong no.";
    }
    else
    {
        cout << "No, Not the strong one";
    }
}
