/*4 – Construa um algoritmo que apresente os 20 primeiros termos da .*/
//Fn = Fn - 1 + Fn - 2

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include <math.h>
#include<stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
	int contador, numero[20];

	
	printf("Sequência da série de Fibonacci.\n");
		
	for (contador=1; contador<=20; contador++){
		if(contador==1)
   			numero[contador] = 0;
   		else if(contador==2)
   			numero[contador] = 1;
   		else
   			numero[contador] = numero[contador-1]+numero[contador-2];
   					
   		printf("%d - %d\n", contador, numero[contador]);
	}

    system("pause");
    return 0;
}
