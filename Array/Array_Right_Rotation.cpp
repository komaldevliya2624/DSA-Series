#include<iostream>
#include<algorithm>
using namespace std;


void RightRotation(int arr[], int n, int k)
{
	k = k%n;
	if (k < 0)
        k += n;  // In case k is negative

	reverse(arr+(n-k), arr+n);
	reverse(arr, arr+(n-k));
	reverse(arr, arr+n);	
}


int main()
{
	int n;
	cout<<"Enter size of array:";
	cin>>n;

	if (n <= 0)
    {
        cout << "Invalid array size.";
        return 0;
    }

	int* arr = new int[n];

	cout<<"Enter elements in array:";
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}

	int k;
	cout << "Enter the number of elements to right rotate: ";
    cin>>k;

	RightRotation(arr,n,k);
	
	cout<<"Array after Right Rotation:-";

	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
	
	delete[] arr;

	return 0;
}