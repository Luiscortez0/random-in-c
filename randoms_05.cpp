//objetivo: HPC que muestre 8 números aleatorios de un intervalo brindado por el usuario.
//autor: luis carlos cortez guzman
//fecha: 22/4/22

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int max,min,i,x;
	srand(time(NULL));
	//titulo
	printf("*8 números aleatorios de un intervalo brindado por el usuario* \n");
	//pedir max
	printf("ingresa el numero maximo que decea: ");
	scanf("%d",&max);
	//pedir min
	printf("ingresa el numero minimo que decea: ");
	scanf("%d",&min);
	//culcular max
	max= (max-min)+1;
	//imprimir los numeros aleatorios
	for(i=1;i<=8;i++){
		x=rand()%max+min;
		printf("%d \n",x);
	}
}
