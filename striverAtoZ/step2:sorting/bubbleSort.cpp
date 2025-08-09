#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) // O(n^2)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}
int main()
{
    int arr[] = {4, 1, 5, 2, 3};
    int n = 5;
    bubbleSort(arr, n);

    for (int x : arr)
    {
        cout << x << " ";
    }
}
