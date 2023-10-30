#include<stdio.h>
#include<locale.h>
char nome[30], setor[3];

main(void){
	setlocale(LC_ALL,"");
	
	printf("Qual o nome do funcionario? ");
	fflush(stdin);
	fgets(nome, 30, stdin);
	
	printf("Dig. o setor:");
	gets(setor);
	
	if((strcmp(setor, "a")==0)||(strcmp(setor, "A")==0)||(strcmp(setor, "tec")==0)||(strcmp(setor, "111")==0)){
		printf("\n\n\nNome: %sBem vindo(a) ao setor tecnico\n", nome);
	}
	else if((strcmp(setor, "b")==0)||(strcmp(setor, "B")==0)||(strcmp(setor, "an")==0)||(strcmp(setor, "112")==0)){
		printf("Nome: %s \nBem vindo(a) ao setor analise\n", nome);
	}
	else if((strcmp(setor, "c")==0)||(strcmp(setor, "C")==0)||(strcmp(setor, "gerent")==0)||(strcmp(setor, "122")==0)){
		printf("Nome: %s \nBem vindo(a) ao setor gerente\n", nome);
		
	}
	else if ((strcmp(setor, "d")==0)||(strcmp(setor, "D")==0)||(strcmp(setor, "dir")==0)||(strcmp(setor, "233")==0)){
		printf("Nome: %s \nBem vindo(a) ao setor diretor\n", nome);
}


		system("pause");
		return 0;				
}

