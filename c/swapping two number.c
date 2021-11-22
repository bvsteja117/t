#include<stdio.h>
main()
{
	float a ,b, temp=0;
		printf("  first number ");
	scanf("%f",&a);
		printf(" second number ");
	scanf("%f",&b);
		printf("before swapping \n%f \n%f",a ,b);
		temp=a;	
		a=b;
		b=temp;
		printf("\ntwo numbers after swapping are\n%f \n%f",a,b);
}
