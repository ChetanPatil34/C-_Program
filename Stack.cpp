#include<stdio.h>
#include<conio.h>
#define Max 5
using namespace std;

int a[Max],top = -1;

void push();
void pop();
void display();
void exit();

int main()
{
	int ch;
	printf("1.PUSH or Insert\n");
	printf("2.POP or Delete\n");
	printf("3.Display\n");
	printf("4.End Program");
	
	while(1)
	{
		printf("\nEnter Choice:");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				{
					push();
					break;
				}
			case 2:
				{
					pop();
					break;	
				}
			case 3:
			    {
				   display();
                   break;
				}	
			case 4:
			    {
			    	printf("Exit Program");
				}	
			default:
				{
					printf("\nwrong choice");
				}
				
		}
	}
	
	return 0;
}
void push()
{
	int data;
	if(top==Max-1)
	{
		printf("\nStack is Full");
	}
	else
	{
		printf("\nEnter the element to be push:");
		scanf("%d",&data);
		top++;
		a[top]=data;
		
	}
}
void pop()
{
	if(top==-1)
	{
		printf("Stack is Empty");
		
	}
	else
	{
		printf("poped element :%d",a[top]);
		top--;
	}
}
void display()
{
	int i;
	if(top>=0)
	{
		printf("Elements:");
		for(i=top; i>0; i--)
		printf("\n%d",a[i]);
		
	}
	else
	{
		printf("The Stack is empty");
		
	}
}