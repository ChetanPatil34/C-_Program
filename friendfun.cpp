#include<iostream>
using namespace std;
class cal
{
  public:
    int add(int a,int b)	
    {
    	return a+b;
	}
	int add(int a,int b,int c)
	{
		return a+b+c;
	}
};
int main()
{ 
   cal C;
   
   cout<<C.add(10,20)<<endl;
   cout<<C.add(12,13,25)<<endl;
  	
	return 0;
}