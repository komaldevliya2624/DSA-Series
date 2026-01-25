#include<iostream>
#include<climits>
using namespace std;

void SLargest(int arr[],int n)
{
	int largest = arr[0];
	int second_largest = INT_MIN;

	for(int i=1;i<n;i++)
	{
		if(arr[i]>largest)
		{
			second_largest = largest;
			largest = arr[i];
		}
		else if(second_largest<arr[i] && arr[i]<largest)
		{
			second_largest = arr[i];
		}
	}
	cout<<"Second Largest value: "<<second_largest<<"\n";
}

void SSmallest(int arr[],int n)
{
	int smallest = arr[0];
	int second_smallest = INT_MAX;

	for(int i=1;i<n;i++)
	{
		if(arr[i]<smallest)
		{
			second_smallest = smallest;
			smallest = arr[i];
		}
		else if(arr[i] != smallest && arr[i] < second_smallest)
        {
            second_smallest = arr[i];
        }
	}
	cout<<"Second smallest value: "<<second_smallest;
}

int main()
{
	int n;
	cout<<"How many elements you want to enter in an array:";
	cin>>n;

	int arr[n];
	cout<<"Enter elements in array:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	SLargest(arr,n);
	SSmallest(arr,n);
	
	return 0;
}
