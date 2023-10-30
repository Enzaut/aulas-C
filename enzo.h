#include<stdio.h>

char nome[70], cpf[15], tel[20];
int n1, n2;
float media2;

void cad_cliente(){
	printf("Dig. o nome do cliente: ");
	fflush(stdin);
	gets(nome);
	
	printf("\nDig. o CPF do cliente: ");
	fflush(stdin);
	gets(cpf);
	
	printf("\nDig. o telefone do cliente: ");
	fflush(stdin);
	gets(tel);

}

void imprimir_cliente(){
	
	printf("\n\nO nome do cliente: %s", nome);
	printf("\nO CPF do cliente: %s", cpf);
	printf("\nO tel. do cliente: %s", tel);
	
}

int calcula_media2(){
	printf("\n DIG. a primeira nota: ");
	fflush(stdin);
	scanf("%f", &n1);
	
	printf("\n DIG. a segunda nota: ");
	fflush(stdin);
	scanf("%f", &n2);
	
	media2 = (n1+n2)/2;
}

void exibir_resultado(){
	printf("\n Primeira nota: %2.f", n1);
	printf("\n Segunda nota: %2.f", n2);
	printf("\n Media das notas: %2.f", media2);
		if (media2>10){
		printf("Valor Invalido!! Reinicie o programa.");
	}else if(media2=>7){
		printf("Parabens!! Aprovado.");
	}else{
		printf("REPROVADO");
	}
}
