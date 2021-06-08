/*7 – Construa um algoritmo que leia um conjunto de dados contendo altura e sexo (‘M’ para
masculino e ‘F’ para feminino) de 50 pessoas e, depois, calcule e escreva:
? A maior e a menor altura do grupo;
? A média de altura das mulheres;*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int contador, altura, maiorAltura, menorAltura, mulheres, alturaMulher=0;
	float mediaAltura;
	char sexo;
	
	for(contador=1; contador<=3; contador++){
		printf("Digite a altura da pessoa %d em centímetro:", contador);
		scanf("%d", &altura);
		fflush(stdin);
		
		printf("Digite o sexo da pessoa %d [M] para masculino e [F] para feminino:", contador);
		scanf("%c", &sexo);
		fflush(stdin);
		
		sexo = toupper(sexo);
		
		if(contador==1)
		maiorAltura = altura;
		if(maiorAltura < altura)
		maiorAltura = altura;
		
		if(contador==1)
		menorAltura = altura;
		if(menorAltura > altura)
			menorAltura = altura;
		
		if(sexo == 'F'){
		mulheres++;
		alturaMulher = alturaMulher + altura;
		}
	}
	mediaAltura = alturaMulher/mulheres;
	
	printf("A maior altura é %d.\n", maiorAltura);
	printf("A menor altura é %d.\n", menorAltura);
	printf("A média de alturas das mulheres é %.1f.\n", mediaAltura);
		
	system("pause");
    return 0;	
}
