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

    // Count occurrences of each element
    for (int i = 0; i < n; ++i)
    {
        int count = 1;

        // Check if the element is already counted
        if (arr[i] != -1)
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    arr[j] = -1; // Mark the element as counted
                }
            }
            cout << "Element " << arr[i] << " occurs " << count << " times.\n";
        }
    }

    return 0;
}
