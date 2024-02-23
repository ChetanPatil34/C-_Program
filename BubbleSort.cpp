#include<iostream>
using namespace std;

int main()
{
	int num,i;
	cout<<"Enter the array size"<<endl;
	cin>>num;
	
	cout<<"Enter the array element"<<endl;
	
	int a[num];
	
	for(i=0; i<num; i++)
	{
		cin>>a[i];
	}

for(i=num; i>0; i--)
{
	for(int j=0; j<i-1; j++)
	{
		if(a[j]>a[j+1])
		{
			int temp=a[j];
			a[j]=a[j+1];
			
			a[j+1]=temp;
		}
	}
}
for(i=0; i<num; i++)
{
	cout<<"BubbleSort";
	cout<<a[i]<<" "<<endl;
}
}