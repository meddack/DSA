#include <iostream>
using namespace std;

// N TO 1 KE LIYE SWAP LINE: 9 AND 10;
void print1ToN(int n)
{
    if (n == 0)
        return;

    print1ToN(n - 1);
    cout << n << endl;
}
int main()
{
    int n;
    cout << "Enter number to print countings: " << " ";
    cin >> n;

    print1ToN(n);
}
