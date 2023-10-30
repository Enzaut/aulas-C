#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<locale.h>

char nome[100];
int i;
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um nome: ");
	gets(nome);
	
	//converte para minusculo
	for(i = 0; nome[i]; i++){
		nome[i] = toupper(nome[i]);
	}
	
	printf("O nome em minusculo é: %s\n", nome);
}
