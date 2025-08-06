#include <iostream>
using namespace std;

int reverse(int x)
{
    long long temp = x;
    long long result = 0; // long long to prevent overflow
    while (temp != 0)
    {
        result = result * 10 + temp % 10;
        temp = temp / 10;
    }
    if (result > INT_MAX || result < INT_MIN)
        return 0;

    return result;
}

int main()
{
    int x;
    cout << "Enter the no. to reverse" << endl;
    cin >> x;
    cout << reverse(x);
}
