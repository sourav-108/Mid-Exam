#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout<<"Enter the size of the array: ";
    cin >> n;

    int arr[100];
    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    for (int i = n - 1; i >= 0; i--) 
    {
        cout << arr[i];
        if (i > 0) 
        {
            cout << ' ';
        }
    }
    cout << endl;

    return 0;
}
