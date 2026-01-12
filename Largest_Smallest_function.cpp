#include<iostream>
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
	int n = 10;
	int arr[n] = {12,13,21,44,79,560,34,11,50,90};
	int largest = INT_MIN;
	int smallest = INT_MAX;
	find_numbers(arr,n,largest,smallest);
}
