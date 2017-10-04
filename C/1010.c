#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,h,n1,h1;
	float s,s1;

	scanf("%d %d %f",&n,&h,&s);
	scanf("%d %d %f",&n1,&h1,&s1);

	
	printf("VALOR A PAGAR: R$ %.2f\n",h*s+h1*s1);


	return 0;
}