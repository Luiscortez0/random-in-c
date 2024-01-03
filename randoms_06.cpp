//objetivo: HPC que muestre 15 números aleatorios diferentes entre 50 y 100.
//autor: luis carlos cortez guzman
//fecha: 22/4/22

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//prototipo
bool verificar(int num, int arreglo[15]);
//cuerpo
int main(){
	srand(time(NULL));
	int arreglo[15],num=0;
	//para que no se repitan
	for(int i=0;i<=14;i++){
		while(verificar(num,arreglo)){
			num=rand()%51+50;
		}
		arreglo[i]=num;
	}
	//imprimir arreglo
	for(int i=0;i<=14;i++){
		printf("%d \n",arreglo[i]);
	}
}
//funcion para no repetir
bool verificar(int num, int arreglo[15]){
	for(int i=0;i<=14;i++){
		if(num==arreglo[i]){
			return true; 
		}
	}
	return false;
}
