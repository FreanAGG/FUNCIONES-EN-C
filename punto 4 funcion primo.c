/*Construir una funcion que reciba un entero positivo y retorne 1 si este es primo y 0 en caso contrario*/

#include <stdio.h>


int PRIMO(int A);

int PRIMO(int A)
{
	int i, cont = 0;
	
	for ( i = 0 ; i <= A; i++){
		if (A % i == 0){
			cont++;
		}
	}
	
	if (cont == 2){
		return 1;
	}
	else{
		return 0;
	}
}