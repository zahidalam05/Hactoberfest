
#include <iostream>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pos = start;
    for (int i = start; i <= end; i++)
    {
        if (arr[i] <= arr[end])
        {
            swap(arr[i], arr[pos]);
            pos++;
        }
    }
    return pos - 1;
}

void quicksort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int pivot = partition(arr, start, end);
    quicksort(arr, start, pivot - 1);
    quicksort(arr, pivot + 1, end);
}

int main()
{
    int arr[100000];
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    quicksort(arr, 0, size - 1);

    cout << "Sorted array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
