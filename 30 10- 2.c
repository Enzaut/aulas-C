#include<stdio.h>
#include<string.h>

int main(){
	char cidade1[50];
	char cidade2[50];
	char cidade3[50];
	int num_letras_cidade1, num_letras_cidade2, num_letras_cidade3;
	
	
	printf("Digite o nome da primeira cidade: ");
	fgets(cidade1, 50, stdin);
	
		printf("Digite o nome da segunda cidade: ");
	fgets(cidade2, 50, stdin);
	
		printf("Digite o nome da terceira cidade: ");
	fgets(cidade3, 50, stdin);
	
	num_letras_cidade1 = strlen(cidade1) - 1;
	num_letras_cidade2 = strlen(cidade2) - 1;
	num_letras_cidade3 = strlen(cidade3) - 1;
	
	printf("A primeria cidade tem %d letras.\n", num_letras_cidade1);
	printf("A segunda cidade tem %d letras.\n", num_letras_cidade2);
	printf("A terceira cidade tem %d letras.\n", num_letras_cidade3);
	
	return 0;
}
