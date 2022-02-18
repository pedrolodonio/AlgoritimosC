#include <stdio.h>

int main(){
	double n;
	printf("digite um numero\n");
	scanf("%lf",&n);
	if(n>100)
		printf("Fora de intervalo");
	else
		if(0<=n>25)
			printf("intervalo [0,25]");
		else
			if(25<=n>50)
				printf("intervalo (25,50]");
			else
				if(50<=n>75)
					printf("intervalo (50,75]");
				else
					if(75<=n<=100)
						printf("intervalo (75,100]");	
}
