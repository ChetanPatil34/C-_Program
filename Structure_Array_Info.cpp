#include<stdio.h>
struct address
{
	char city[20];
	int pin;
	char phone[13];
	
};
struct employee
{
	char name[20];
	struct address add;
};
 int main()
 {
 	struct employee emp;
 	printf("\n Enter the name,city pin ,phone:");
 	scanf("%s %s %d %s",&emp.name,&emp.add.city,&emp.add.pin,&emp.add.phone);
 	
 	printf("\n name:%s ",emp.name);
 	printf("\n City:%s",emp.add.city);
 	printf("\n Pin: %d",emp.add.pin);
 	printf("\n Pin: %s",emp.add.phone);
 	
 }