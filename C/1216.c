#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char nome[50];
	double total=0;
	int cont=0,distancia=0;

	while(fgets(nome,50,stdin)!= NULL)
	{
		scanf("%d",&distancia);
		total += distancia;
		cont++;
	}

	printf("%.1f\n",total/cont);

	return 0;

}