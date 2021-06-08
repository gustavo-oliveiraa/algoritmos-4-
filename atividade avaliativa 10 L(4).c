/*10 � Construa um algoritmo que permita fazer um levantamento do estoque de vinhos de uma
adega, tendo como dados de entrada tipos de vinho, sendo: �T� para tinto, �B� para branco e �R� 
para ros�. Especifique a porcentagem de cada tipo sobre o total geral de vinhos; a quantidade de
vinhos � desconhecida, utilize como finalizador �F� de fim.*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char vinho;
	int tinto=0, branco=0, rose=0;
	float totalVinhos, porcentagemTinto, porcentagemBranco, porcentagemRose;
	
	printf("Para a contabilizar os vinhos, digite |T|- tinto, |B|- branco, |R|- ros�.\n");
	printf("Quando desejar finalizar o programa digite |F|.\n");
	
	do{
		printf("\nDigite o tipo de vinho, de acordo com as instru��es acima:");
		scanf("%c", &vinho);
		fflush(stdin);
		
		vinho = toupper(vinho);
		
		if(vinho=='T')
			tinto++;
				else if(vinho=='B')
					branco++;
						else if(vinho=='R')
							rose++;
								else
									printf("Vinho informado, inv�lido!\n");	
				
		
	}while(vinho != 'F');
	
	system("cls");
	
	totalVinhos = tinto + branco + rose;
	
	porcentagemTinto = (tinto/totalVinhos) * 100;
	porcentagemBranco = (branco/totalVinhos) * 100;
	porcentagemRose = (rose/totalVinhos) * 100;
	
	printf("Agrade�o a colabora��o!\n");
	printf("Seguem os dados coletados:\n");
	printf("A porcentagem de vinhos tintos � %.1f.\n", porcentagemTinto);
	printf("A porcentagem de vinhos brancos � %.1f.\n", porcentagemBranco);
	printf("A porcentagem de vinhos ros�s � %.1f.\n", porcentagemRose);
	
	system("pause");
    return 0;	
}
