/*Construir una funcion que reciba un numero entero y retorne 1 si este es perfecto
y 0 si no lo es. Utilizarla para mostrar los primeros 5 perfectos*/

#include<stdio.h>

int PERFECTOS (int A)
{
	int i, divisores = 0;
	
	for(i = 1 ; i < A ; i++){
		
		
		if(A % i == 0){
			divisores+=i;
		}
	}
	
	if(divisores == A){
		return 1;
	}
	else{
		return 0;
	}
}

int main()
{
	int A = PERFECTOS(496);
	
	printf("%d", A);
}