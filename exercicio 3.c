#include<stdio.h>
#include<locale.h>

char pri[30], seg[30], terc[30];
float v1, v2, v3, total;

main(void){
	setlocale(LC_ALL,"");
	
	
	printf("Digite o primeiro lanche:");
	fgets(pri,20,stdin);
	
	printf("\n Digite o valor do primeiro lanche: ");
	fflush(stdin);
	scanf("%f", &v1);
	
	printf("\n Digite o segundo lanche: ");
	fgets(seg,20,stdin);
	
	printf("\n Digite o valor do segundo lanche: ");
	fflush(stdin);
	scanf("%f", &v2);
	
	printf("\n Digite o terceiro lanche: ");
	fgets(terc,20,stdin);
	
	printf("\n Digite o valor do terceiro lanche: ");
	fflush(stdin);
	scanf("%f", &v3);
	
	total = v1+v2+v3;
	system("cls");

//Impre	
	printf("LANCHE: %s \nPREÇO: %.2f\n", pri, v1);
	printf("LANCHE: %s \nPREÇO: %.2f\n", seg,v2);
	printf("LANCHE: %s \nPREÇO: %.2f\n", terc, v3);

	printf("\nTOTAL: %.2f", total);
	
	system("pause");
	return 0;
}
