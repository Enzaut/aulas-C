#include<stdio.h>
#include<locale.h>
int idade;
float altura[3];

main(void){
	setlocale(LC_ALL,"");
	
	
	//CADASTRO
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	printf("Digite sua idade");
	scanf("%i", &idade);
	system("cls");
		printf("ALTURA: %f \nIDADE: %i\n", altura, idade);
	system("pause");
}
