//objetivo: HPC que muestre un numero aleatorio entre 0 y 10
//autor: luis carlos cortez guzman
//fecha: 22/4/22

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	
	int a;
	a=rand()%11;
	printf("numero aleatirio entre 0 y 10: %d",a);
}
