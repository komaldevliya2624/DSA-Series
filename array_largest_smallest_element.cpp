#include<iostream>
#include<climits>
using namespace std;

void find_numbers(int arr[],int n,int largest,int smallest)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]>largest)
		{
			largest = arr[i];
		}
		
		if(arr[i]<smallest)
		{
			smallest = arr[i];
		}
	}

	cout<<"Largest element is :"<<largest<<"\n";
	cout<<"Smallest element is :"<<smallest;


}

int main(){
	
	int n;

	cout<<"How many elements you want to enter in an array:";
	cin>>n;

	int arr[n];

	cout<<"Enter elements in array:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}		
	int largest = INT_MIN;
	int smallest = INT_MAX;

	find_numbers(arr,n,largest,smallest);


	return 0;
}