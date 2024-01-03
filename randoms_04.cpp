//objetivo: HPC que muestre n numeros aleatorio entre 56 y 98
//autor: luis carlos cortez guzman
//fecha: 22/4/22

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int n,i,x;
	srand(time(NULL));
	//titulo
	printf("PROGRAMA PARA MOSTRAR N NUMEROS ALEATORIOS ENTRE 56 Y 98 \n");
	//pedir n
	printf("ingresa la cantidad de numeros aleatorios que quieres: ");
	scanf("%d",&n);
	//imprimir los numeros aleatorios
	for(i=1;i<=n;i++){
		x=rand()%43+56;
		printf("%d \n",x);
	}
}
