/*
Program to convert a decimal number to it's binary equivalent.
Hosted on Github by: optimus-p-ime
Compiled on: Turbo-C Compiler.
*/

#include<conio.h>
#include<stdio.h>
int main()
{
	int num,bin=1;
	clrscr();
	printf("Enter a decimal number:\n");
	scanf("%d",&num);
	while(num!=0)
	{
		bin = bin*10+num%2;
		num /= 2;
	}
	num = bin;
	printf("The equivalent binary number is:\n");
	while(num!=1)
	{
		printf("%d",num%10);
		num/=10;
	}
	printf('\n');
	getch();
	return 0;
}
	
