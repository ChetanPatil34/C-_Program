#include<iostream>

using namespace std;

int main()
{
	int n;
	int i;
	int flag=0;
	
	cout<<"enter a number :";
	cin>>n;
	
	if(n==0)
	
	flag=1;
	
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0){
			flag=1;
			break;
		}
	}
	
	
	if(flag==0)
	{
		cout<<"PRIME";
	}
	else
	{
		cout<<"NOT PRIME";
	}
	
	return 0;
}