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

    for (int i = 0; i < n; ++i)
    {
        int count = 1;

        if (arr[i] != -1)
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    arr[j] = -1;
                }
            }
            cout << "Element " << arr[i] << " occurs " << count << " times.\n";
        }
    }

    return 0;
}
