#include <stdio.h>
#include <stdlib.h>
typedef struct num
{	
	int numero;
	int quantidade;
	struct num * proximo;
}NUMERO;

void insereNumero(NUMERO * nf,int x)
{
	NUMERO * aux = nf;
	NUMERO * novo;

		while(aux!=NULL)
		{
			if(aux->numero == x)
			{
				aux->quantidade++;
				break;
			}
			else
			{
				aux = aux->proximo;
			}
		}
		novo = (NUMERO*) malloc(sizeof(NUMERO));
		novo->numero = x;
		novo->quantidade = 1;
		novo->proximo = nf;
}

int main()
{
		NUMERO * ponteiro;
		ponteiro = NULL;

		int a, i, n;

		scanf("%d",&a);

		
		for (i = a; i>=1;i--)
		{
			scanf("%d",&n);

			insereNumero(ponteiro,n);

		}
		
		imprime(ponteiro);

	return 0;

}