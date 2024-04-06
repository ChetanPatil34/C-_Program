#include<iostream>

using namespace std;

int binarySearch(int arr[], int find, int low, int high)
{
	if(low <= high)
	{
		int mid = (low + high) / 2;
		 
		if(arr[mid] == find)
		{
			return mid;
		}
		if(arr[mid] < find)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1; 
		}
	}
	
	return -1;
	
}

int main()
{
	int arr[] = {10,20,30,40,50,60};
	int elements = sizeof(arr)/sizeof(arr[0]);
	
	int find = 30;
	
	int result = binarySearch(arr, find, 0, elements -1);
	
	if(result == -1)
	{
		cout << "Element not in Array";
	}
	else
	{
		cout << "Element at "<< result << " index";
	}
	
	
	
	return 0;
}
