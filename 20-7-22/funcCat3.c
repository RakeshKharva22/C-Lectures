#include <stdio.h>
//int add(int a, int b);  //Function Declaration

int add(int a, int b)  //formal
{
	return a+b;
}

void main()
{
	int a, b;
	printf("Enter A : ");
	scanf("%d",&a);
	printf("Enter B : ");
	scanf("%d",&b);
	printf("\nAddition is %d",add(a,b));  // Actual parameters
}

