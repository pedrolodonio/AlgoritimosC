#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main(){
	double raio,A;
    printf("digite o valor do raio da circunferencia\n");
    scanf("%lf",&raio);
    A= pow(raio,2)*PI;
    printf("A=%4.lf",A);
}

