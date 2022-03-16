#include <stdio.h>
 int main(){
 	double x,y;
 	printf("Digite o ponto X\n");
 	scanf("%lf",&x);
 	printf("Digite o ponto Y\n");
 	scanf("%lf",&y);
 	if(x==0 && y==0)
 		printf("origem");
 	else
 		if(y==0)
 			printf("Eixo X");
 		else
 			if(x==0)
 				printf("Eixo y");
 			else
			 	if(x>0 && y>0)
				 	printf("Q1");
				else
					if(x<0 && y>0)
						printf("Q2");	
					else
						if(x<0 && y<0)
							printf("Q3");
						else
							if(x>0 && y<0)
								printf ("Q4"); 	
 }
