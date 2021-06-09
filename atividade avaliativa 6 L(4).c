/*6 – Elabore um algoritmo que imprima todos os números primos existentes entre N1 e N2, em que
N1 e N2 são números naturais fornecidos pelo usuário.*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include <math.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int contador, numeroUm, numeroDois, teste=2;
		
	do{
		printf("Digite o primeiro número:");
		scanf("%d", &numeroUm);
		fflush(stdin);
		if(numeroUm < 0){
			printf("Apenas números positivos.");
			printf("Digite o primeiro número:");
			scanf("%d", &numeroUm);
			fflush(stdin);
		}
	}while(numeroUm < 0);
	
	do{
		printf("Digite o segundo número:");
		scanf("%d", &numeroDois);
		fflush(stdin);
		if(numeroDois < 0){
			printf("Apenas números positivos.");
			printf("Digite o segundo número:");
			scanf("%d", &numeroDois);
			fflush(stdin);
		}
	}while(numeroDois < 0);
	
	for(contador = numeroUm; contador <= numeroDois; contador++){
		if(contador % teste != 0){
			printf("%d, ", contador);
		}
	}	
		
	printf("\n");
	
	system("pause");
	return 0;
}
