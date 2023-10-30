#include <stdio.h>
#include<locale.h>
int andar1, andar2;

main(void){
	setlocale(LC_ALL, "");
	printf("Dig. o 1ª andar:");
	scanf("%i", &andar1);
	printf("Dig. o 2º andar:");
	scanf("%i", &andar2);
	if(andar1 == andar2){
		printf("Os andares são iguais");
	}
	else{
		
		if(andar1 > andar2){
			printf("O 1º andar é maior\n");
		}else{
			printf("A 2º andar é maior\n");
		}
	}
	
	
	system("pause");
	return 0;
}
