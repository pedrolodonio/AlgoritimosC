#include <stdio.h>

int main(){
	int idade;
	printf("insira a idade\n");
	scanf("%i",&idade);
	if(idade==10)
		printf ("criança");
	else
		if(idade==18)
			printf("adolescente");
		else
			if(idade==60)
				printf("adulto");
			else
				if(idade==100)
					printf("idoso");
				else
					if(idade==150)
						printf("zumbi");
					else
						printf("idade invalida");
				
}
