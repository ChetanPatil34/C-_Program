#include<iostream>
using namespace std;
int main()
{
	int size;
	int arr[50];
	int i;
	int j;
	int temp;
	
	cout<<"Enter the Size";
	cin>>size;
	
	for(i=0; i<size; i++)
	{
		cin>>arr[50];
	}
	cout<<"Sorting Array using Selection Sort\n";
	for(i=0; i<size; i++)
	{
		for(j=i+1; j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"Now the Array after sorting is :\n";
	for(i=0; i<size; i++)
	{
		cout<<arr[i]<<"  ";	
	} 
}
