#include <iostream>
using namespace std;

int main() 
{
    int n;
    int arr[100];
    cout<<"Enter the size of the array: ";
    cin >> n;
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 1; i < n; i++) 
    {
        if (arr[i] < arr[minIndex]) 
        {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) 
        {
            maxIndex = i;
        }
    }

    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;

    for (int i = 0; i < n; i++) 
    {
        cout << arr[i];
        if (i < n - 1) cout << ' ';
    }
    cout << endl;

    return 0;
}
