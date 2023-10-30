#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<locale.h>

int idade, ap;

int main(){
	setlocale(LC_ALL, "");
	printf("Digite idade: ");
	scanf("%d%*[^\n]",&idade);
	printf("Dig. o numero da casa/ap: ");
	scanf("%d%*[^\n]",&ap);
	
	printf ("Idade: %d\n",idade);
	printf ("Ap: %d\n",ap);
	
	
	return 0;
}
