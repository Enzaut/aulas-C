#include <stdio.h>
#include<locale.h>

char empresa[50], endereco[70];
int tel[20], cnpj[20];
float venda[20];

main(void){
	setlocale(LC_ALL,"");
		
	printf("Nome da empresa: ");
	fflush(stdin);
	gets(empresa);
	
	printf("Endereço da empresa: ");
	gets (endereco);
	
	printf("Telefone da empresa: ");
	gets(tel);
	
	printf("CNPJ da empresa: ");
	gets(cnpj);
	
	print("Renda do setor de novos/seminovos: ");
	gets(venda);
	
		if(venda<=10000){
		printf("\n\n Micro empresa.");
		}else if(venda<=50000){
		printf("\n\n Empresa de medio porte.");
		}else if(venda>50000){
		printf("\n\n Empresa de grande porte");
		}
	}
	
