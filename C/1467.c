#include <stdio.h>


int main()
{
	
	int a,b,c;
	int game = 0;

	while(scanf("%d %d %d",&a,&b,&c) != EOF){ //EOF CRTL+D

		a = a*100;
		b = b*10;
		c = c*1;

		game = a+b+c;
		
		switch(game)
		{
			case 00:
			printf("*\n");
			break;

			case 1:
			printf("C\n");
			break;

			case 10:
			printf("B\n");
			break;
			
			case 11:
			printf("A\n");
			break;
			
			case 100:
			printf("A\n");
			break;
			
			case 101:
			printf("B\n");
			break;
			
			case 110:
			printf("C\n");
			break;
			
			case 111:
			printf("*\n");
			break;
			

		}


	}


return 0;
}