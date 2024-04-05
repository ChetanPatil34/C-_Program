#include<iostream>

using namespace std;

int main()
{
	int arr[] = {10,20,30,40,50} ;
	int elements = 5 ;
	int find = 40;
	
	for(int i=0; i<elements ; i++)
	{
		if(arr[i] == find)
		{
			cout << "Element present in " << i << " index";
		}		
	}
	
	return 0;
}
