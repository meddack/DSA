#include <iostream>
using namespace std;
void printNTimes(int n)
{
    // base case
    if (n < 0)
        return;
    cout << " Ash " << endl;

    printNTimes(n - 1);
}

int main()
{
    int n;
    cout << "Enter number of times to print ASH " << endl;

    cin >> n;
    // string ans;
    // cin >> ans;

    printNTimes(n);
}
