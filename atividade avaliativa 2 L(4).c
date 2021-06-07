/*2 – Elabore um algoritmo que escreva o signo do zodíaco correspondente ao dia e mês informado.*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int diaSigno, mesSigno;
	
	printf("Digite o dia do seu nascimento:");
	scanf("%d", &diaSigno);
	fflush(stdin);
	printf("Digite o mês do seu nascimento:");
	scanf("%d", &mesSigno);
	fflush(stdin);
		
	if(mesSigno == 1 && diaSigno >= 21 && diaSigno <= 31 || mesSigno == 2 && diaSigno >= 1 && diaSigno <= 19)
		printf("Seu signo é Aquário.\n");
			else if(mesSigno == 2 && diaSigno >= 20 && diaSigno <= 29 || mesSigno == 3 && diaSigno >= 1 && diaSigno <= 20)
				printf("Seu signo é Peixes.\n");
					else if(mesSigno == 3 && diaSigno >= 21 && diaSigno <= 31 || mesSigno == 4 && diaSigno >= 1 && diaSigno <= 20)
						printf("Seu signo é Áries.\n");
							else if(mesSigno == 4 && diaSigno >= 21 && diaSigno <= 30 || mesSigno == 5 && diaSigno >= 1 && diaSigno <= 20)
								printf("Seu signo é Touro.\n");
									else if(mesSigno == 5 && diaSigno >= 21 && diaSigno <= 31 || mesSigno == 6 && diaSigno >= 1 && diaSigno <= 20)
										printf("Seu signo é Gêmeos.\n");
											else if(mesSigno == 6 && diaSigno >= 21 && diaSigno <= 30 || mesSigno == 7 && diaSigno >= 1 && diaSigno <= 21)
												printf("Seu signo é Câncer.\n");
													else if(mesSigno == 7 && diaSigno >= 22 && diaSigno <= 31 || mesSigno == 8 && diaSigno >= 1 && diaSigno <= 22)
														printf("Seu signo é Leão.\n");
															else if(mesSigno == 8 && diaSigno >= 23 && diaSigno <= 31 || mesSigno == 9 && diaSigno >= 1 && diaSigno <= 22)
																printf("Seu signo é Virgem.\n");
																	else if(mesSigno == 9 && diaSigno >= 23 && diaSigno <= 30 || mesSigno == 10 && diaSigno >= 1 && diaSigno <= 22)
																		printf("Seu signo é Libra.\n");
																			else if(mesSigno == 10 && diaSigno >= 23 && diaSigno <= 31 || mesSigno == 11 && diaSigno >= 1 && diaSigno <= 21)
																				printf("Seu signo é Escorpião.\n");
																					else if(mesSigno == 11 && diaSigno >= 22 && diaSigno <= 30 || mesSigno == 12 && diaSigno >= 1 && diaSigno <= 21)
																						printf("Seu signo é Sagitário.\n");
																							else if(mesSigno == 12 && diaSigno >= 22 && diaSigno <= 31 || mesSigno == 1 && diaSigno >= 1 && diaSigno <= 20)
																								printf("Seu signo é Capricórnio.\n");																						
																									else
																										printf("Dia ou mês informado é inválido.\n");
	
    system("pause");
    return 0;	
}
