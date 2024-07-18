#include<stdio.h>

int main(){
	char *hello ="hello,World!\n";
	while(*hello){
		putchar(*hello);
		hello++;
	}
	return 0;
}