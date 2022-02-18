#include <stdio.h>

int main(){
	int ddd;
	printf("insira o  DDD\n");
	scanf("%i",&ddd);
	if(ddd!=61 && ddd!=71 && ddd!=11 && ddd!=21 && ddd!=32 && ddd!=19 && ddd!=27 && ddd!=31)
	printf("ddd nao registrado");
	else
		if(ddd==61)
			printf("Brasilia");
		else
			if(ddd==71)
				printf("Salvador");
			else
				if(ddd==11)
		 			printf("Sao Paulo");
				else
					if(ddd==21)
						printf("Rio de Janeiro");
					else
						if(ddd==32)
							printf("Juiz de Fora");
						else
							if(ddd==19)
								printf("Campinas");
							else
								if(ddd==27)
									printf("Vitoria");
								else
									if(ddd==31)
										printf("Belo Horizonte");
}
