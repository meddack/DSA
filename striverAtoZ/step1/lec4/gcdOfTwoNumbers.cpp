#include <iostream>
using namespace std;

int GCD(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a = 0 ? b : a; // if a=0 return b,  else return a
}
int main()
{
    int a;
    int b;
    cin >> a >> b;
    cout << GCD(a, b);
}
