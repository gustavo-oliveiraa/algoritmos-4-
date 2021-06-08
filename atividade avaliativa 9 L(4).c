/*9 – Imagine uma brincadeira entre dois colegas, na qual um pensa um número e o outro deve
fazer chutes até acertar o número imaginado. Como dica, a cada tentativa é dito se o chute foi alto
ou foi baixo. Elabore um algoritmo dentro deste contexto, que leia o número imaginado e os
chutes, ao final mostre quantas tentativas foram necessárias para descobrir o número.*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int contador=0, numero, chutes;
	
	
	printf("Digite o número imaginado:");
	scanf("%d", &numero);
	fflush(stdin);
	
	system("cls");
	
	do{
		printf("Digite seu chute:");
		scanf("%d", &chutes);
		fflush(stdin);
		if(chutes<numero){
			printf("Chute foi baixo!\n");
		}	
		else if(chutes>numero){
			printf("Chute foi alto!\n");
		}
		contador++;
		
	}while(numero!=chutes);
	
	printf("O número de chutes até o acerto foi %d.\n", contador);
	
	system("pause");
    return 0;	
}
