#include<iostream>
using namespace std;

int main()
{
	int age;
	
	cout<<"enter age";
	cin>>age;
	
	if(age>12 && age<20)
	{
		cout<<"you are teenger";
	}
	else if(age<12)
	{
		cout<<"your are clid";
	}
	else
	{
		cout<<"you are elder";
	}
}
