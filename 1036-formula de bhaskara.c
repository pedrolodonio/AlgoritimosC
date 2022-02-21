#include <stdio.h>
#include <math.h>
//algoritimo que calcule a formula de Bhaskara
int main(){
	double b,a,c,d,r,x1,x2;
	printf("digite o valor de a\n");
	scanf("%lf",&a);
	printf("digite o valor de b\n");
	scanf("%lf",&b);
	printf("digite o valor de c\n");
	scanf("%lf",&c);
	d=pow(b,2)-4*a*c;
	if(d<0 || 2*a==0)
		printf("impossivel calcular");
	else{
		r=sqrt(d);
		x1=(-b+r)/(2*a);
		x2=(-b-r)/(2*a);
		printf("R1= %lf\n",x1);
		printf("R2= %lf",x2);
	}
	
}
