/*11 � Construa um algoritmo que calcule a m�dia aritm�tica de um conjunto de n�meros pares que
forem fornecidos pelo usu�rio. O valor de finaliza��o ser� a entrada do n�mero 0. Observe que
nada impede que o usu�rio forne�a quantos n�meros �mpares quiser, com a ressalva de que eles
n�o poder�o ser acumulados.*/

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
	
	
	printf("Para o c�lculo da m�dia ser� necess�ria a digita��o de n�meros pares, informe |0| - quando desejar ir aos resultados.\n ");
	
	do{
		printf("\nDigite um n�mero par:");
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
	
	printf("A m�dia dos n�meros pares � %.1f\n", media);
		
	system("pause");
	return 0;
}
