#include<stdio.h>
main()
{
	float a,b,c,d,e;
	printf("enter first number");
	scanf("%f",&a);
	printf("enter second number");
	scanf("%f",&b);
	c=a+b;
	printf("sum of first and second numbers is %f", c);
	d=a-b;
	printf("\ndifference of first and second numbers is%f", d);
	e=a*b;
	printf("\nproduct of first and second numbers is%f", e);
	float f;
	f=a/b;
	printf("\nquoitient of first and second numbers%f", f);
}
