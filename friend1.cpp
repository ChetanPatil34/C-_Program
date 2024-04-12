#include<iostream>
using namespace std;

class shubham{
	private :
		int a;
		public :
			void get(int n)
			{
				a=n;
			}
			friend void display(shubham k); 
};
void display(shubham k)
{
	cout<<"a="<<k.a;
}
int main()
{
	shubham x;
	x.get(10);
	display(x);
	return 0;
	
}