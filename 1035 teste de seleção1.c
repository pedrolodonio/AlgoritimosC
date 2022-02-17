#include <stdio.h>

int main(){
	int a,b,c,d;
	printf("digite 4 numeros\n");
	scanf("%i",&a);
	scanf("%i",&b);
	scanf("%i",&c);
	scanf("%i",&d);
	if(b>c && d>a && c+d>a+b && c>0 && d>0 && a%2==0)
		printf("valores aceitos");
	else
		printf("valores nao aceitos");
		
}
