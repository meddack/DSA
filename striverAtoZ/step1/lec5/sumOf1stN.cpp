#include <iostream>
using namespace std;
int printSum(int n)
{
    // base case
    if (n == 0)
    {
        return 0;
    }

    // recursion
    n = n + printSum(n - 1);
    return n;
}
int main()
{
    int n;
    cout << "Enter Number: " << " ";
    cin >> n;

    cout << printSum(n);
}
