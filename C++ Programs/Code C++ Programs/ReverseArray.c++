#include <iostream>
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

    cout << "Array in reverse order:\n";
    for (int i = n - 1; i >= 0; --i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
