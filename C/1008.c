#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, h;
	float s;

	scanf("%d",&n);
	scanf("%d",&h);
	scanf("%f",&s);


	printf("NUMBER = %d\n",n);
	printf("SALARY = U$ %.2f\n",h*s);


	return 0;
}