#include<stdio.h>
#include<locale.h>
char opcao;
int senha;
main(void){
	setlocale(LC_ALL,"portuguese");
	printf("---------------SORVETERIA---------------\n");
	printf("Digite sua senha: ");
	scanf("%i",&senha);
	system("cls");
	
	if (senha==123) {
		printf("Qual sabor de sorvete:");
		printf("\nA - chocolate / B - Baumilha / C - Verde\n\n");
		printf("Op��o:");
		fflush(stdin);
		scanf("%c",&opcao);
		switch(opcao){
			case'a':
			case'A':
				printf("Voc� escolheu sabor chocolate");
			case'b':
			case'B':
				printf("Voc� escolheu sabor baumilha");
			case'c':
			case'C':
				printf("Voc� escolheu sabor verde");				
		}
	}else{
		printf("Senha errada");
	}
	return 0;
}
