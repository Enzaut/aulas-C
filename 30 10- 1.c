#include<stdio.h>
#include<string.h>
#include<locale.h>
char palavra1 [100], palavra2[100];
unsigned tamPalavra;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite a 1� palavra: ");
	scanf("%[^\n]%*c", palavra1);
	printf("Digite a 2� palavra: ");
	scanf("%[^\n]%*c", palavra2);
	
	tamPalavra = strlen(palavra1);
	
	printf("Tamanho da string 1 �: %u\n", tamPalavra);
	printf("Tamanho da string 1 �: %u\n", strlen(palavra2));
	getch();
}
