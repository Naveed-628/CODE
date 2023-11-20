#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of the array:\n";

    // Input array elements
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    // Sort array in ascending order
    sort(arr, arr + n);

    cout << "Array in ascending order:\n";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
