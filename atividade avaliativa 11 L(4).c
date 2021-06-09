/*11 – Construa um algoritmo que calcule a média aritmética de um conjunto de números pares que
forem fornecidos pelo usuário. O valor de finalização será a entrada do número 0. Observe que
nada impede que o usuário forneça quantos números ímpares quiser, com a ressalva de que eles
não poderão ser acumulados.*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include <math.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int contador=0, numero;
	float soma=0, media;
	
	
	printf("Para o cálculo da média será necessária a digitação de números pares, informe |0| - quando desejar ir aos resultados.\n ");
	
	do{
		printf("\nDigite um número par:");
		scanf("%d", &numero);
		fflush(stdin);
	
		if((numero % 2 == 0) && numero != 0){
			soma = soma + numero;		
		}
		else{
			contador--;
		}
		contador++;
	}while(numero!=0);
	
	system("cls");
	
	media = soma/contador;
	
	printf("A média dos números pares é %.1f\n", media);
		
	system("pause");
	return 0;
}
