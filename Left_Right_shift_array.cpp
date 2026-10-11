#include <iostream>
using namespace std;

int main()
{
    int n, arr[100];
    char direction;

    cout << "Enter array size: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Shift left or right? (L/R): ";
    cin >> direction;

    if (direction == 'L' || direction == 'l')
    {
        for (int i = 0; i < n - 1; i++) arr[i] = arr[i + 1];
        arr[n - 1] = 0;
    }
    else if (direction == 'R' || direction == 'r')
    {
        for (int i = n - 1; i > 0; i--) arr[i] = arr[i - 1];
        arr[0] = 0;
    }
    else
    {
        cout << "Invalid choice.\n";
        return 0;
    }

    cout << "Array after shifting: ";
    for (int i = 0; i < n; i++) cout << arr[i] << ' ';
    cout << endl;

    return 0;
}
