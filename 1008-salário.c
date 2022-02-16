//1008-salário
#include <stdio.h>

int main(){
	int ndf;//(numero do funcionario);
	float vdh,ht;//(valor da hora,horas trabalhadas);
	printf(">>>>>Calculadora de Salarios<<<<<\n");
	printf("digite o numero do funcionario\n");
	scanf("%i",&ndf);
	printf("digite a quantidade de horas trabalhadas\n");
	scanf("%f",&ht);
	printf("digite o valor da hora\n");
	scanf("%f",&vdh);
	printf("numero= %i\n",ndf);
	printf("salario= R$ %.2f",ht*vdh);
	
}
