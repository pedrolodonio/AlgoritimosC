#include <stdio.h>
#define p1 3.5
#define p2 7.5
int main(){
double a,b,media;
printf("digite a primeira nota do aluno\n");
scanf("%lf",&a);
printf("digite a segunda nota do aluno\n");
scanf("%lf",&b);
media=(a*p1+b*p2)/11;
printf("a media é %.2lf",media);
}
