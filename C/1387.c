#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b;

	do
	{

		scanf("%d %d",&a,&b);

		if(a==b && a == 0)
			break;
		
		printf("%d\n",a+b);

		

	}while(1);
	
	return 0;
}