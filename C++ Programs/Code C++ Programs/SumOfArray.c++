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

    int sum = 0;

    // Calculate sum of array elements
    for (int i = 0; i < n; ++i)
    {
        sum += arr[i];
    }

    cout << "Sum of array elements: " << sum << endl;

    return 0;
}
