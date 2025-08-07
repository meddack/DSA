// logic is correct but code not working on my compiler.
// although it is running on cpp online compiler

#include <iostream>
using namespace std;
void reversedArray(int arr[], int start, int end)
{
    if (start >= end)
        return;

    swap(arr[start], arr[end]);
    reversedArray(arr, start + 1, end - 1);
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0;

    reversedArray(arr, start, size - 1);

    for (int x : arr)
        cout << x << " ";
    cout.flush();
}
