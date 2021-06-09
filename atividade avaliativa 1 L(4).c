/*1 – Elabore um algoritmo que, a partir de um dia, mês e ano fornecidos, valide se eles compõem
uma data válida. Não deixe de considerar os meses com 30 ou 31 dias, e o tratamento de ano
bissexto.*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include <math.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int dia, mes, ano, validacaoDiaMes, validacaoAno;
	
	do{
		validacaoDiaMes = 0;
		printf("Digite algum dia (até dois digitos):");
		scanf("%d", &dia);
		fflush(stdin);
	
		do{
			if(dia<1 || dia>31){
				printf("Número inválido.\n");
				printf("Digite algum dia (até dois digitos):");
				scanf("%d", &dia);
				fflush(stdin);
			}
		}while(dia<1 || dia>31);
	
		printf("Digite algum mês com as numerações de 1 a 12 (até dois dígitos):");
		scanf("%d", &mes);
		fflush(stdin);
	
		do{
			if(mes<1 || mes>12){
				printf("Número inválido.\n");
				printf("Digite algum mês com as numerações de 1 a 12 (até dois dígitos):");
				scanf("%d", &mes);
				fflush(stdin);
			}
		}while(mes<1 || mes>12);
	
		if((mes == 2|| mes ==4|| mes == 6|| mes == 9|| mes == 11) && dia == 31){
			printf("%d/%d não existe! Tente novamente.\n", dia, mes);
			validacaoDiaMes = 1;}
				
		if(mes == 2 && dia == 30){
			printf("%d/%d não existe! Tente novamente.\n", dia, mes);
			validacaoDiaMes = 1;}
	
		switch(mes){
		case 1:
		printf ("Janeiro\n");
		break;
		case 2:
		printf ("Fevereiro\n");
		break;
		case 3:
		printf ("Março\n");
		break;
		case 4:
		printf ("Abril\n");
		break;
		case 5:
		printf ("Maio\n");
		break;
		case 6: 
		printf ("Junho\n");
		break;
		case 7: 
		printf ("Julho\n");
		break;
		case 8:
		printf ("Agosto\n");
		break;
		case 9:
		printf ("Setembro\n");
		break;
		case 10:
		printf ("Outubro\n");
		break;
		case 11:
		printf ("Novembro\n");
		break;
		case 12:
		printf ("Dezembro\n");
		break;
		default:
		printf ("Mês inválido\n");
		break;
		}	
	}while(validacaoDiaMes==1);
	
	do{
		validacaoAno=0;
		printf("Digite um ano (até quatro dígitos):");
		scanf("%d", &ano);
		fflush(stdin);
		if(ano<1 || ano>9999){
			printf("Ano inválido!\n");
			validacaoAno = 1;
		}
		if(mes==2 && dia==29){
			if(((ano % 4 == 0 && ano % 100 != 0 ) || ano % 400 == 0 )){
		}

		else {
			printf("%d/%d/%d não é uma data válida, pois o ano %d não é bissexto.\n", dia, mes, ano, ano);
			validacaoAno=1;
		}}
	}while(validacaoAno==1);

	printf("%d/%d/%d é uma data válida!\n", dia, mes, ano);
		
	system("pause");
	return 0;
}
