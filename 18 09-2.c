#include <stdio.h>
#include<locale.h>
char setor;

main(void){
	setlocale(LC_ALL, "");
	printf("Dig. o setor: ");
	scanf("%c", &setor);
	
	if((setor == 'A')||(setor == 'a')){
	
		printf("Setor da Tecnologia\n");
		printf("Bem vindo!");
		
	}else if((setor == 'B')||(setor == 'b')){
			printf("Setor do Financeiro\n");
			printf("Bem vindo!");
			
			}else if((setor == 'C')||(setor == 'c')){
				printf("Setor da Segurança\n");
				printf("Bem vindo!");
				
			}else{
				printf("Valor invalido!!\n");
			}
		system("pause");
		return 0;
		}
		

