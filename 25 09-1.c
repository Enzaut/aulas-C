#include<stdio.h>
#include<locale.h>
char opcao;
main(void){
	setlocale(LC_ALL, "portuguese");
	printf("Informe onde gostaria de ir hoje:\n");
	printf("A - Parque / B - Cinema / C - Sorveteria \n");
	printf("Opção: ");
	scanf("%c",&opcao);
	
	switch(opcao){
		case 'A':;
		case'a':
			printf("Você escolheu o Parque\n");									
			break;
		case 'B':;
		case'b':
			printf("Você escolheu o Cinema\n");
			break;
		case 'C':;
		case 'c':
			printf("Você escolheu a Sorveteria\n");
			break;
		default:
			printf("Opção invalida\n");
	}
}
