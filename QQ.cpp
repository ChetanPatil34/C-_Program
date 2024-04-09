#include<iostream>

using namespace std;


int main()
{
	
 
	int n;
	int f = -1;
	int r = -1;
	int arr[n];
	
	cout << "Enter Elements :";
	cin >> n;
	
	if(r<n)
	{
		arr[++r]=10;
	}
	
	for(int i=f+1 ; i<n; i++)
	{
		cout << arr[i] << " ";
	}
	
	return 0;
}