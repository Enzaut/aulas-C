#include<stdio.h>
#include<locale.h>
int i, rg[4], tel[4];
char nome [4] [50];


main(void){
	setlocale(LC_ALL,"");
	
	for(i=1; i<=3; i++){
		
		printf("Digite o nome: ");
		fflush(stdio);
		gets(nome[i]);
		
		printf("Digite o rg: ");
		scanf("%i", &rg[i]);
		
		printf("Digite o telefone: ");
		scanf("%i", &tel[i]);
	}
	
	system("cls");
	
	for(i=1; i<=3; i++){
		printf("Nome: %s", nome[i])
		printf("Rg: %i\n", rg[i]);
		printf("Telefone %i\n", tel[i]);
	}
}
