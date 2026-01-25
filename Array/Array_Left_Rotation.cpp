#include<iostream>
#include<climits>
using namespace std;

void LeftRotation(int arr[], int n, int k)
{
	k = k % n;
	if (k < 0)
        k += n;  // In case k is negative

    int* temp = new int[k];

	for(int i=0;i<k;i++)
	{
		temp[i] = arr[i];
	}

	for(int i=k;i<n;i++)
	{
		arr[i-k] = arr[i];
	}

	for(int i=n-k;i<n;i++)
	{
		arr[i] = temp[i-(n-k)];
	}

	delete[] temp;	
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

    int k;
    cout << "Enter the number of elements to left rotate: ";
    cin>>k;


    LeftRotation(arr,n,k);

     cout << "Array after left rotation:\n";

    for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}

    delete[] arr;
     
	return 0;
}
