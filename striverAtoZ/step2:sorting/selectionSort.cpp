#include <iostream>
using namespace std;

void selectSort(int arr[], int n) // O(n^2)
{
    for (int i = 0; i < n - 1; i++)
    {
        int si = i; // smallest index, assume 1st hi smallest h
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[si])
                si = j; // agar chota mile to swap(si with j)
        }
        swap(arr[i], arr[si]); // last me swap maar do arr ko
    }
}
int main()
{
    int arr[] = {4, 1, 5, 2, 3};
    int n = 5;
    selectSort(arr, n);

    for (int x : arr)
    {
        cout << x << " ";
    }
}
