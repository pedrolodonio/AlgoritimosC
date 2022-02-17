//recebe duas notas,faz calculo de media simples,se media >=9.5 aprovado se nao reprovado
#include <stdio.h>

int main(){
	float n1,n2;
	printf("digite a primeira nota\n");
	scanf("%f",&n1);
	printf("digite a segunda nota\n");
	scanf("%f",&n2);
	if((n1+n2)/2>=9.5)
		printf("parabéns!aprovado!");
	else
		printf("tente novamente! Reprovado");
}
