#include <iostream>
using namespace std;

int main()
{
    int n, arr[100];
    char direction;

    cout << "Enter array size: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Rotate left or right? (L/R): ";
    cin >> direction;

    if (direction == 'L' || direction == 'l')
    {
        int first = arr[0];

        for (int i = 0; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        arr[n - 1] = first;
    }
    else if (direction == 'R' || direction == 'r')
    {
        int last = arr[n - 1];

        for (int i = n - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[0] = last;
    }
    else
    {
        cout << "Invalid choice.\n";
        return 0;
    }

    cout << "Array after rotation: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }

    cout << endl;
    return 0;
}
