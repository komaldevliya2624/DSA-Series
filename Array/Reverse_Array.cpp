#include<iostream>
#include<algorithm>
using namespace std;

void ReverseArray(int arr[],int n)
{
	int start = 0,end = n-1;
	while(start<end)
	{
		swap(arr[start],arr[end]);
		start++;
		end--;
	}

	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
	
}
int main()
{
	int n;
	
	cout<<"How many elements do you want to enter in the array? ";
	cin>>n;

	 if (n <= 0)
    {
        cout << "Invalid array size.";
        return 0;
    }

    int* arr = new int[n];   

    cout << "Enter elements in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ReverseArray(arr, n);

    delete[] arr;  

    return 0;
}
