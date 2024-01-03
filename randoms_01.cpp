//objetivo: HPC que llene una matriz de 3*8 enteros con números aleatorios y al final indique cuántos elementos fueron pares y cuántos fueron impares.
//autor: luis carlos cortez guzman
//fecha: 29/3/22

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int v[3][8],fila,columna,par,impar;
	par=0;
	impar=0;
	//semilla random
	srand(time(NULL));
	//llenar la matriz de numeros aleatorios
	for(fila=0;fila<=2;fila++){
			for(columna=0;columna<=7;columna++){
	        	v[fila][columna]=rand();
			}
    }
    //conteo de pares e impares
    for(fila=0;fila<=2;fila++){
			for(columna=0;columna<=7;columna++){
				if(v[fila][columna]%2==0){
					par=par+1;
	            }else{
	                impar=impar+1;
	            }
			}
	}
    //titulo
    printf("NUMEROS ALEATORIOS DE LA MATRIZ DE 3*8 \n");
    //imprimir matriz
    for(fila=0;fila<=2;fila++){
			for(columna=0;columna<=7;columna++){
				printf("%d \n",v[fila][columna]);
			}
   	}
    //imprimir cuantos pares e impares posee la matriz
    printf("la matriz posee: \n");
    printf("%d valores pares. \n",par);
    printf("%d valores impares. \n",impar);
}
