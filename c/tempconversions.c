#include<stdio.h>
main()
{
	float tf,c;
	printf("read temperature in f");
	scanf("%f",&tf);	
	c=(5*(tf-32))/9;
	printf("%f",c);
}
