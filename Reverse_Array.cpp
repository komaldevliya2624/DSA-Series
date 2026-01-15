#include<iostream>
using namespace std;

void reverse_function(int arr[],int n)
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
	int arr[n];
	cout<<"How many elements do you want to enter in the array? ";
	cin>>n;
	cout<<"Enter elements in an array:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	reverse_function(arr,n);
	
	
	return 0;
}