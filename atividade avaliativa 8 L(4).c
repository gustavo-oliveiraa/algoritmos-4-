/*8 – Anacleto tem 1,50 metro e cresce 2 centímetros por ano, enquanto Felisberto tem 1,10 metro
e cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos anos serão
necessários para que Felisberto seja maior que Anacleto.*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int contador=1, alturaAnacleto, alturaFelisberto;
	alturaAnacleto=150;
	alturaFelisberto=110;
	
	do{
		
	alturaAnacleto = alturaAnacleto + 2;
	alturaFelisberto =	alturaFelisberto + 3;
	contador++;	
			
	}while(alturaAnacleto > alturaFelisberto);
	
	printf("Quantos anos serão necessários para que Felisberto seja maior que Anacleto?\n");
	printf("Serão necessários %d anos até que Felisberto seja maior que Anacleto.\n", contador);
	
	system("pause");
    return 0;
}
