#include<iostream>
using namespace std;

int main()
{
	int Length;
	int max=0;
	int add=0;
	cout<<"Enter the Array length:";
	cin>>Length;
	
	int a[Length];
	
	cout<<"Enter the Arra size";
	
	for(int i=0; i<Length; i++)
	{
		cin>>a[i];
		add=a[i]+add;
		if(max<a[i])
		{
			
			max=a[i];
		}
		
	}
	cout<<"add="<<add<<endl;;
	cout<<"max="<<max;
	
}