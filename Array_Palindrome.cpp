#include <iostream>
using namespace std;

int main()
{
    int n;
    int arr[100];
    bool palindrome = true;

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
    {
        cout << "The array is palindrome." << endl;
    }
    else
    {
        cout << "The array is not palindrome." << endl;
    }

    return 0;
}
