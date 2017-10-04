#include <stdio.h>
#include <stdlib.h>




int main()
{
	int n=0, a=0, b=0, contA=0, contB=0;


	while(1)
	{
		scanf("%d",&n);
		if(n==0)
			break;
		while(n>=1)
		{
			scanf("%d %d",&a,&b);

			if(a>b)
				contA++;
			else 
				if(a<b)
					contB++;

			n--;

		}
		printf("%d %d\n",contA,contB);
		contA = 0;
		contB = 0;
	}



	return 0;
}