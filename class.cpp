#include<iostream>
using namespace std;

class A
{
	int no;
	float cast;
	
	public:
		void getdata(int a,float b);
		void putdata()
		{
			cout<<"no:"<<no;
			cout<<"cast:"<<cast;
		}
	
};
void A::getdata(int a,float b)
{
	no=a;
	cast=b;
}
int main()
{
	A x;
	x.getdata(100,299.9);
	x.putdata();
	
	A y;
	y.getdata(20,14.4);
	y.putdata();
	
	return 0;
}