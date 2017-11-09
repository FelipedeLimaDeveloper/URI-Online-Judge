#include <stdio.h>
#include <stdlib.h>

int main()
{
	float v[6];
	scanf("%f %f %f %f %f %f", &v[0],&v[1],&v[2],&v[3],&v[4],&v[5]);
	int i, cont = 0;
	while(i<=5)
	{
		if(v[i]>0)
		{
			cont++;
		}
		i++;
	}
	printf("%d valores positivos\n",cont);
	return 0;
}
