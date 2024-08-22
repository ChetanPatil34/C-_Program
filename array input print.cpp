#include<iostream>
using namespace std;
int main()
{
	int a[5],i;
	cout<<"Enter the Array Element:";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"\n Entered by user";
	for(i=0;i<5;i++)
	{
		cout<<"\n"<<a[i];
	}
}