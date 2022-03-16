#include <stdio.h>

int main(){
	char nome[61];
	int idade,sexo;
	double altura;
	printf("digite o seu nome\n");
	scanf("%s",&nome);
	printf("digite sua idade\n");
	scanf("%d",&idade);
	printf("digite seu sexo\n");
	printf("1-masculino\n");
	printf("2-feminino\n");
	printf("3-prefiro nao informar\n");
	scanf("%d",&sexo);
	printf("digite sua altura\n");
	scanf("%lf",&altura);
	printf("nome:%s\n",nome);
	printf("idade:%i anos\n",idade);
	printf("sexo:%d \n",sexo);
	printf("altura:%lf",altura);
}
