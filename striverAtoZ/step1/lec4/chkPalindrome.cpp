#include <iostream>
using namespace std;
bool chkPalindrome(int x)
{
    if (x < 0)
    {
        return false;
    }
    long long temp = x;
    long long result = 0; // long long to prevent overflow
    while (temp != 0)
    {
        result = result * 10 + temp % 10;
        temp = temp / 10;
    }
    if (result > INT_MAX || result < INT_MIN)
        return 0;

    if (x == result)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    cout << "Enter number to check palindrome: ";
    cin >> n;

    if (chkPalindrome(n))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
