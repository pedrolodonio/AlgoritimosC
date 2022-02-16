//Quatro operações
#include <stdio.h>

int main(){
	float PROD,Soma,difer,divi,a,b;
	printf("digite um numero\n");
	scanf("%f",&a);
	printf("digite outro numero\n");
	scanf("%f",&b);
	PROD=a*b;
	Soma=a+b;
	difer=a-b;
	divi=a/b;
	printf("Soma=%.2f \n",Soma);
	printf("diferenca=%.2f \n",difer);
	printf("PROD=%.2f \n",PROD);
	printf("divisao=%.2f \n",divi);
}
