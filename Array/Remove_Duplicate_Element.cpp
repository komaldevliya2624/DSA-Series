#include<iostream>
using namespace std;

void RemoveDuplicate(int arr[], int n)
{
	int index = 0;
	for(int j=0;j<n;j++)
	{
		if(arr[index] != arr[j])
		{
			arr[index+1] = arr[j];
			index++;
		}
		
	}
	cout << "After removing duplicate elements, size of array is: "<<index+1<<"\n";

	cout << "Array after removing duplicate elements:\n";
    for(int i = 0; i <= index; i++)
    {
        cout << arr[i] << "\t";
    }

    delete[] arr;
}
int main()
{
	int n;
	cout<<"How many elements you want to enter in array:";
	cin>>n;

	if(n <= 0)
    {
        cout << "Invalid array size.";
        return 0;
    }

	int* arr = new int[n];
	cout<<"Enter elements in array(IN SORTED ORDER):";
	for(int i=0;i<n;i++)
		cin>>arr[i];

	RemoveDuplicate(arr,n);

	return 0;
}