/*3 � Construa um algoritmo que seja capaz de dar a classifica��o ol�mpica de 3 pa�ses informados.
Para cada pa�s � informado o nome, a quantidade de medalhas de ouro, prata e bronze. Considere
que cada medalha de ouro tem peso 3, cada prata tem peso 2 e cada bronze, peso 1.*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int contador, medalhasUm, ouroUm=0, prataUm=0, bronzeUm=0, pontuacaoUm=0, medalhasDois, ouroDois=0, prataDois=0, bronzeDois=0, pontuacaoDois=0, medalhasTres, ouroTres=0, prataTres=0, bronzeTres=0, pontuacaoTres=0;
	char paisUm[30], paisDois[30], paisTres[30], materialMedalha;
	
	
	printf("Digite o nome do primeiro pa�s, para a classifica��o:");
	fgets(paisUm, 30, stdin);
	fflush(stdin);
	printf("Digite o nome do segundo pa�s, para a classifica��o:");
	fgets(paisDois, 30, stdin);
	fflush(stdin);
	printf("Digite o nome do terceiro pa�s, para a classifica��o:");
	fgets(paisTres, 30, stdin);
	fflush(stdin);
	
	system("cls");
	
	printf("Quantas medalhas ao todo, possuem o primeiro pa�s:");
	scanf("%d", &medalhasUm);
	fflush(stdin);
	
	for(contador=1; contador<=medalhasUm; contador++){
		printf("\nPara a classifica��o digite |O| - ouro, |P| - prata e |B| - bronze.\n");
		printf("\nInforme o material da medalha %d, de acordo com as informa��es acima:", contador);
		scanf("%c", &materialMedalha);
		fflush(stdin);
		
		materialMedalha = toupper(materialMedalha);
		
		if(materialMedalha == 'O'){
			ouroUm++;
			pontuacaoUm = pontuacaoUm + 3;
		}
		else if(materialMedalha == 'P'){
			prataUm++;
			pontuacaoUm = pontuacaoUm + 2;
		}
		else if(materialMedalha == 'B'){
			bronzeUm++;
			pontuacaoUm = pontuacaoUm + 1;
		}
		
	}
	
	system("cls");
	
	printf("Quantas medalhas ao todo, possuem o segundo pa�s:");
	scanf("%d", &medalhasDois);
	fflush(stdin);
	
	for(contador=1; contador<=medalhasDois; contador++){
		printf("\nPara a classifica��o digite |O| - ouro, |P| - prata e |B| - bronze.\n");
		printf("\nInforme o material da medalha %d, de acordo com as informa��es acima:", contador);
		scanf("%c", &materialMedalha);
		fflush(stdin);
		
		materialMedalha = toupper(materialMedalha);
		
		if(materialMedalha == 'O'){
			ouroDois++;
			pontuacaoDois = pontuacaoDois + 3;
		}
		else if(materialMedalha == 'P'){
			prataDois++;
			pontuacaoDois = pontuacaoDois + 2;
		}
		else if(materialMedalha == 'B'){
			bronzeDois++;
			pontuacaoDois = pontuacaoDois + 1;
		}
		
	}
	
	system("cls");
	
	printf("Quantas medalhas ao todo, possuem o terceiro pa�s:");
	scanf("%d", &medalhasTres);
	fflush(stdin);
	
	for(contador=1; contador<=medalhasTres; contador++){
		printf("\nPara a classifica��o digite |O| - ouro, |P| - prata e |B| - bronze.\n");
		printf("\nInforme o material da medalha %d, de acordo com as informa��es acima:", contador);
		scanf("%c", &materialMedalha);
		fflush(stdin);
		
		materialMedalha = toupper(materialMedalha);
		
		if(materialMedalha == 'O'){
			ouroTres++;
			pontuacaoTres = pontuacaoTres + 3;
		}
		else if(materialMedalha == 'P'){
			prataTres++;
			pontuacaoTres = pontuacaoTres + 2;
		}
		else if(materialMedalha == 'B'){
			bronzeTres++;
			pontuacaoTres = pontuacaoTres + 1;
		}
		
	}
	
	system("cls");
	
	printf("O pa�s %s possuem %d medalhas de ouro, %d medalhas de prata e %d medalhas de bronze com a pontua��o de %d.\n", paisUm, ouroUm, prataUm, bronzeUm, pontuacaoUm);
	printf("O pa�s %s possuem %d medalhas de ouro, %d medalhas de prata e %d medalhas de bronze com a pontua��o de %d.\n", paisDois, ouroDois, prataDois, bronzeDois, pontuacaoDois);
	printf("O pa�s %s possuem %d medalhas de ouro, %d medalhas de prata e %d medalhas de bronze com a pontua��o de %d.\n", paisTres, ouroTres, prataTres, bronzeTres, pontuacaoTres);
		
	system("pause");
    return 0;
}
