#include <stdio.h>

void add(int a, int b)  // Cat2 -> No return type and with parameter  // Formal parameters
{
	printf("\nAddition = %d",(a+b));
}

void sub(int a, int b)  // Cat2 -> No return type and with parameter  // Formal parameters
{
	printf("\nSubtraction= %d",(a-b));
}

void main()
{
	int a = 10, b= 20; 
	add(a,b);  // Passing actual parameters
	sub(a,b);
}