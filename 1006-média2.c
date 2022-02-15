#include <stdio.h>

int main(){
	float a,b,c,media;
	printf("digite a primeira nota\n");
	scanf("%f",&a);
	printf("digite a segunda nota\n");
	scanf("%f",&b);
	printf("digite a terceira nota\n");
	scanf("%f",&c);
	media=(a*2+b*3+c*5)/10;
	printf("media=%f",media);
}
