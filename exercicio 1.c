#include<stdio.h>
#include<locale.h>
char letra, nome[15], curso[30];
main(void){
	setlocale(LC_ALL,"");
	
	
	//CADASTRO
	printf("Digite a 1º letra do nome: ");
	fflush(stdin);
	scanf("%c", &nome);
	printf("Digite seu 1º nome: ");
	fflush(stdin);	
	scanf("%s", &nome);
	printf("Digite seu curso superior:");
	fflush(stdin);
	fgets(curso,20,stdin); //curso=variavel  20= numero de caracteres  stdin memoria
	system("cls");
	
	//IMPRESSOES
	printf("Letra: %c \nNome: %s \n", letra, nome);
	printf("Curso %s\n", curso);
	system("pause");
}	
