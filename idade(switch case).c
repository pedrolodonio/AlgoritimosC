#include <stdio.h>
int main (){
	int idade;
	printf("digite a idade\n");
	scanf("%d",&idade);
	switch(idade){
		case 0 ... 10:
			printf("crianca\n"); 
		break;
		case 11 ... 18:
			printf("adolescente\n");
		break;
		case 19 ... 60:
			printf("adulto\n");
		break;
		case 61 ... 100:
			printf("idoso");
		break;
		default:
			printf("idade invalida");
	}
}

