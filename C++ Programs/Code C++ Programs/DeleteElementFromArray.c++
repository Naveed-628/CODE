#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of the array:\n";

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int element;
    cout << "Enter the element to delete: ";
    cin >> element;

    int i;
    for (i = 0; i < n; ++i)
    {
        if (arr[i] == element)
        {
            break; 
        }
    }

    if (i < n)
    {
        for (int j = i; j < n - 1; ++j)
        {
            arr[j] = arr[j + 1];
        }
        n--; 
    }
    else
    {
        cout << "Element not found in the array.\n";
    }

    cout << "Array after deletion:\n";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
