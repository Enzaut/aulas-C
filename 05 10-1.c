#include <stdio.h>
#include <locale.h>
main(void){
	setlocale(LC_ALL,"");
	int idade[4];
	int n;
	
	for(n=1; n<=3; n++){
		printf("Digite uma idade: ");
		scanf("%i", &idade[n]);
	}
	
	system("cls");
	
	for(n=1; n<=3; n++){
		printf("Idade %i\n", idade[n]);
	}
}
