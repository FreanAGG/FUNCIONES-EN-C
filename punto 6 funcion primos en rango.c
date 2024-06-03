/*Utilizar la funcion del problema anterior para mostrar las cantidades de numeros primos
que hay entre [1000-2000] [2000-3000] [3000-4000]. */

#include <stdio.h>

int PRIMO(int A, int B);

int main()
{
	int A, B;

	int cantPrimos1000a2000 = PRIMO(1000, 2000);
    int cantPrimos2000a3000 = PRIMO(2000, 3000);
    int cantPrimos3000a4000 = PRIMO(3000, 4000);

    // Mostramos los resultados
    printf("Cantidad de primos entre [1000-2000]: %d\n", cantPrimos1000a2000);
    printf("Cantidad de primos entre [2000-3000]: %d\n", cantPrimos2000a3000);
    printf("Cantidad de primos entre [3000-4000]: %d\n", cantPrimos3000a4000);
}

int PRIMO(int A, int B)
{
	int i, j, contdivisores = 0, contprimos = 0 ;
	
	for(i = A ; i <= B ; i++ ){
		contdivisores = 0;
		
		for(j = 1 ; j <= i; j++){
			if ( i % j == 0){
				contdivisores++;
			}
		}
		
		if (contdivisores == 2){
			contprimos++;
		}
	}
	
	return contprimos;
}