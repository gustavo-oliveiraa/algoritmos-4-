/*5 – Escreva um algoritmo que imprima todas as possibilidades de que o lançamento de dois dados
tenhamos o valor 7 como resultado da soma dos valores de cada dado.*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int contadorUm, contadorDois, soma;
	
	for(contadorUm = 1; contadorUm <=6; contadorUm++){
		for(contadorDois = 1; contadorDois <= 6; contadorDois++){
			if((contadorUm + contadorDois == 7)){
				soma =  contadorUm + contadorDois;
				printf("%d + %d = %d\n", contadorUm, contadorDois, soma);
			}
		}
	}	
	
	system("pause");
	return 0;
}
