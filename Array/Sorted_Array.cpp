#include<iostream>
using namespace std;

bool CheckAscending(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        if(arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

bool CheckDescending(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        if(arr[i] < arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "How many elements do you want to enter in the array? ";
    cin >> n;

    if(n <= 0)
    {
        cout << "Invalid array size.";
        return 0;
    }

    int* arr = new int[n];

    cout << "Enter elements in the array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if(CheckAscending(arr, n))
    {
        cout << "Array is sorted in ascending order.";
    }
    else if(CheckDescending(arr, n))
    {
        cout << "Array is sorted in descending order.";
    }
    else
    {
        cout << "Array is NOT sorted.";
    }

    delete[] arr;
    
    return 0;
}
