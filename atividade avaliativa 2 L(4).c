/*2 � Elabore um algoritmo que escreva o signo do zod�aco correspondente ao dia e m�s informado.*/

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
	printf("Digite o m�s do seu nascimento:");
	scanf("%d", &mesSigno);
	fflush(stdin);
		
	if(mesSigno == 1 && diaSigno >= 21 && diaSigno <= 31 || mesSigno == 2 && diaSigno >= 1 && diaSigno <= 19)
		printf("Seu signo � Aqu�rio.\n");
			else if(mesSigno == 2 && diaSigno >= 20 && diaSigno <= 29 || mesSigno == 3 && diaSigno >= 1 && diaSigno <= 20)
				printf("Seu signo � Peixes.\n");
					else if(mesSigno == 3 && diaSigno >= 21 && diaSigno <= 31 || mesSigno == 4 && diaSigno >= 1 && diaSigno <= 20)
						printf("Seu signo � �ries.\n");
							else if(mesSigno == 4 && diaSigno >= 21 && diaSigno <= 30 || mesSigno == 5 && diaSigno >= 1 && diaSigno <= 20)
								printf("Seu signo � Touro.\n");
									else if(mesSigno == 5 && diaSigno >= 21 && diaSigno <= 31 || mesSigno == 6 && diaSigno >= 1 && diaSigno <= 20)
										printf("Seu signo � G�meos.\n");
											else if(mesSigno == 6 && diaSigno >= 21 && diaSigno <= 30 || mesSigno == 7 && diaSigno >= 1 && diaSigno <= 21)
												printf("Seu signo � C�ncer.\n");
													else if(mesSigno == 7 && diaSigno >= 22 && diaSigno <= 31 || mesSigno == 8 && diaSigno >= 1 && diaSigno <= 22)
														printf("Seu signo � Le�o.\n");
															else if(mesSigno == 8 && diaSigno >= 23 && diaSigno <= 31 || mesSigno == 9 && diaSigno >= 1 && diaSigno <= 22)
																printf("Seu signo � Virgem.\n");
																	else if(mesSigno == 9 && diaSigno >= 23 && diaSigno <= 30 || mesSigno == 10 && diaSigno >= 1 && diaSigno <= 22)
																		printf("Seu signo � Libra.\n");
																			else if(mesSigno == 10 && diaSigno >= 23 && diaSigno <= 31 || mesSigno == 11 && diaSigno >= 1 && diaSigno <= 21)
																				printf("Seu signo � Escorpi�o.\n");
																					else if(mesSigno == 11 && diaSigno >= 22 && diaSigno <= 30 || mesSigno == 12 && diaSigno >= 1 && diaSigno <= 21)
																						printf("Seu signo � Sagit�rio.\n");
																							else if(mesSigno == 12 && diaSigno >= 22 && diaSigno <= 31 || mesSigno == 1 && diaSigno >= 1 && diaSigno <= 20)
																								printf("Seu signo � Capric�rnio.\n");																						
																									else
																										printf("Dia ou m�s informado � inv�lido.\n");
	
	system("pause");
    return 0;	
}
