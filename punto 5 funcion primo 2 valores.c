/*Utilizar la funcion del problema anterior para construir otra funcion que
reciba dos enteros positivos y retorne la cantidad de numeros primos que se
encuentran en el rango determinado por ellos*/

#include <stdio.h>

int PRIMO(int A, int B);

int main ()
{
	int A, B, pares = 0;
	
	printf("NUM 1 = ");
	scanf("%d", &A);
	printf("NUM 2 = ");
	scanf("%d", &B);
	
	pares = PRIMO(A, B);
	
	printf("CANTIDAD DE PARES: %d", pares);
	
}

int PRIMO(int A, int B)
{
	int i, j, contdivisores = 0, contprimos = 0;
	
	for ( i = A ; i <= B; i++){
		contdivisores = 0;
		for( j = 1 ; j <= i; j++){		//Segundo bucle para recorrer todos los numeros
			if(i  % j == 0){
				contdivisores++;
			}
		}
		
		if (contdivisores == 2){
			contprimos++;
		}
	}
	
	return contprimos;
}