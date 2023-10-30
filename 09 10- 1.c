#include<stdio.h>
#include<locale.h>

	int i, cont;
	float n1[100], n2[100], media[100];
	char nome[100] [50], opcao;

main(void){
	
	setlocale(LC_ALL,"");
	
	do{
		printf("Nome do aluno: ");
		fflush(stdin);
		gets(nome[i]);
	
	
		printf("Dig. a 1ª nota: \n");
		scanf("%f", &n1[i]);
		
		printf("Dig. a 2ª nota: \n");
		scanf("%f", &n2[i]);
		
		printf ("\nDeseja cadastrar mais um aluno? (s) (n)\n");
		scanf("%s", &opcao);
		
		media[i] = (n1[i]+n2[i])/2;
		
		cont++;
		i++;
		
		system("cls");
		
		
	} while ((opcao =='s')||(opcao =='S'));
	
	
	
	for(i = 0; i<cont; i++){
		printf("\n=========================================\n");	
		printf("Nome = %s\n", nome[i]);
		printf("1ª Nota = %.1f\n", n1[i]);
		printf("2ª Nota = %.1f\n", n2[i]);
		printf("Media = %.1f\n", media[i]);
	}
	return 0;
	
}
