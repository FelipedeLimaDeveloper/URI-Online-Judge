#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159


int main(void)
{
	double r;
	scanf("%lf",&r);
	printf("A=%.4f\n",PI*pow(r,2.0));
	return 0;
}

//gcc 1002.c -o exe -lm
