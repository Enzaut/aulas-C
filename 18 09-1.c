#include <stdio.h>
#include<locale.h>
int andar1, andar2;

main(void){
	setlocale(LC_ALL, "");
	printf("Dig. o 1� andar:");
	scanf("%i", &andar1);
	printf("Dig. o 2� andar:");
	scanf("%i", &andar2);
	if(andar1 == andar2){
		printf("Os andares s�o iguais");
	}
	else{
		
		if(andar1 > andar2){
			printf("O 1� andar � maior\n");
		}else{
			printf("A 2� andar � maior\n");
		}
	}
	
	
	system("pause");
	return 0;
}
