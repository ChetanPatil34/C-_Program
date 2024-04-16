#include<iostream>
using namespace std;
int main()
{
	int n,i,c=0;
	
	cout<<"enter the number=";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		c++;
	}
	if(c==2)
	{
		cout<<"number is not prime";
	}
	else
	{
		cout<<"number is prime";
	}
	return 0;
}