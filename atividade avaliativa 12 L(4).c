/*12 – Em uma eleição presidencial existem quatro candidatos. Os votos são informados por código.
Os dados utilizados para a ação obedecem à seguinte codificação:
• 1, 2, 3, 4 = voto para os respectivos candidatos;
• 5 = voto nulo;
• 6 = voto em branco.
Elabore um algoritmo que calcule e escreva:
• O total de votos para cada candidato e seu percentual sobre o total;
• O total de votos nulos e seu percentual sobre o total;
• O total de votos em branco e seu percentual sobre o total.
Como finalizador do conjunto de votos, tem-se o valor 0.*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int voto, candidatoUm=0, candidatoDois=0, candidatoTres=0, candidatoQuatro=0, votoNulo=0, votoBranco=0;
	float votosTotal=0, porcentagemUm=0, porcentagemDois=0, porcentagemTres=0, porcentagemQuatro=0, porcentagemNulo=0, porcentagemBranco=0;
	
	printf("Para a eleição utilize |1| - votar no primeiro candidato.\n");
	printf("Para a eleição utilize |2| - votar no segundo candidato.\n");
	printf("Para a eleição utilize |3| - votar no terceiro candidato.\n");
	printf("Para a eleição utilize |4| - votar no quarto candidato.\n");
	printf("Para a eleição utilize |5| - votar nulo.\n");
	printf("Para a eleição utilize |6| - votar em branco.\n");
	printf("Para a eleição utilize |0| - para o fim dos votos.\n ");
	
	do{
	printf("\nDigite seu voto:");
	scanf("%d", &voto);
	fflush(stdin);
	
	if(voto == 1){
		candidatoUm++;
		votosTotal = votosTotal + 1;
	}
	else if(voto == 2){
		candidatoDois++;
		votosTotal = votosTotal + 1;
	}
	else if(voto == 3){
		candidatoTres++;
		votosTotal = votosTotal + 1;
	}
	else if(voto == 4){
		candidatoQuatro++;
		votosTotal = votosTotal + 1;
	}else if(voto == 5){
		votoNulo++;
		votosTotal = votosTotal + 1;
	}else if(voto == 6){
		votoBranco++;
		votosTotal = votosTotal + 1;
	}else
		printf("Código não encontrado no sistema.\n");
	
	}while(voto != 0);
	
	porcentagemUm = (candidatoUm/votosTotal) * 100;
	porcentagemDois = (candidatoDois/votosTotal) * 100;
	porcentagemTres = (candidatoTres/votosTotal) * 100;
	porcentagemQuatro = (candidatoQuatro/votosTotal) * 100;
	porcentagemNulo = (votoNulo/votosTotal) * 100;
	porcentagemBranco = (votoBranco/votosTotal) * 100;
	
	system("cls");
	
	printf("O total dos votos do primeiro candidato é %d e a porcentagem sobre o total é %.3f porcento.\n", candidatoUm, porcentagemUm);
	printf("O total dos votos do segundo candidato é %d e a porcentagem sobre o total é %.3f porcento.\n", candidatoDois, porcentagemDois);
	printf("O total dos votos do terceiro candidato é %d e a porcentagem sobre o total é %.3f porcento.\n", candidatoTres, porcentagemTres);
	printf("O total dos votos do quarto candidato é %d e a porcentagem sobre o total é %.3f porcento.\n", candidatoQuatro, porcentagemQuatro);
	printf("O total de votos nulos é %d e a porcentagem sobre o total é %.3f porcento.\n", votoNulo, porcentagemNulo);
	printf("O total de votos em brancos é %d e a porcentagem sobre o total é %.3f porcento.\n", votoBranco, porcentagemBranco);
	
	system("pause");
    return 0;	
}
