#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;

    n = n * factorial(n - 1);
    return n;
}
int main()
{
    int n;
    cin >> n;

    cout << "factorial is: " << factorial(n);
}
