#include<stdio.h>
#include<locale.h>
char opcao;
main(void){
	setlocale(LC_ALL, "portuguese");
	printf("Informe onde gostaria de ir hoje:\n");
	printf("A - Parque / B - Cinema / C - Sorveteria \n");
	printf("Op��o: ");
	scanf("%c",&opcao);
	
	switch(opcao){
		case 'A':;
		case'a':
			printf("Voc� escolheu o Parque\n");									
			break;
		case 'B':;
		case'b':
			printf("Voc� escolheu o Cinema\n");
			break;
		case 'C':;
		case 'c':
			printf("Voc� escolheu a Sorveteria\n");
			break;
		default:
			printf("Op��o invalida\n");
	}
}
