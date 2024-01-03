//objetivo: HPC que muestre 4 numeros aleatorio entre 0 y 50
//autor: luis carlos cortez guzman
//fecha: 22/4/22

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(){
	srand(time(NULL));
	int a,i;
	printf("PROGRAMA PARA IMPRIMIR 4 NUMEROS RANDOM ENTRE 0 Y 50 \n");
	a=rand()%51;
	printf("%d \n",a);
	a=rand()%51;
	printf("%d \n",a);
	a=rand()%51;
	printf("%d \n",a);
	a=rand()%51;
	printf("%d \n",a);
}
