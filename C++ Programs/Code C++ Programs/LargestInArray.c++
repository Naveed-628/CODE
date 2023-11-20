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

    int largest = arr[0];

    // Find the largest element in the array
    for (int i = 1; i < n; ++i)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout << "Largest element in the array: " << largest << endl;

    return 0;
}
