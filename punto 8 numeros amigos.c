#include <stdio.h>

int son_amigos(int A, int B)
{
	int i, j, contdivisoresa = 0, contdivisoresb = 0;
	
	for(i = 1; i <= A ; i++){
		if (A % i == 0){
			contdivisoresa+=i;
		}
	}
	
	for(j = 1; j <= B ; j++){
		if (B % j == 0){
			contdivisoresb+=j;
		}
	}
	
	if(contdivisoresa == contdivisoresb && contdivisoresb == contdivisoresa){
		return 1;
	}
	else{
		return 0;
	}
}

int main()
{
	int A, B;
	
	printf("INGRESE NUMERO:");
	scanf("%d", &A);
	printf("INGRESE NUMERO:");
	scanf("%d", &B);
	
	if(son_amigos(A, B)){
		printf("Los numeros %d y %d son AMIGOS", A, B);
	}
	else{
		printf("NO SON AMIGOS");
	}
	
}