#include<stdio.h>
main()
{
	float p,t,r,SI;
	printf("\nprincipal=");
	scanf("%f",&p);
	printf("\ntime=");
	scanf("%f",&t);
	printf("\nrate of interest=");
	scanf("%f",&r);
	SI=(p*t*r)/100;
	printf("\nsimple of interest=%f",SI);
}
