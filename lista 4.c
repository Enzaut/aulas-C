#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

	int i;
	char nome[10][70], petnome[10][80], tel[10][30];

void seu_primeiro_nome(){
printf("Super Petshop---Enzo Gomide Martins---Eng.Software\n\n");

		printf("Dig o nome:");
		scanf("%s", &nome[i]);
		
		printf("Nome do pet: ");
    	scanf("%s", &petnome[i]);
    	
    	printf("Telefone do cliente: ");
    	scanf("%s", &tel[i]);
    	printf("\n\n");

    printf("Clientes e pets cadastrado!\n");
    system("cls");
    
}


void AgendarBanho() {
	
    int opcao;
    char gabinete[20];
    char formaPag[20];
printf("Super Petshop---Enzo Gomide Martins---Eng.Software\n\n");
	printf("Nome do pet: %s\n", petnome[i]);
	
    printf("1 - Banho\n");
    printf("2 - Tosa\n");
    printf("3 - Banho e Tosa\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);


    switch(opcao) {
    	
        case 1:
            printf("Escolheu Banho!");
            break;
            
        case 2:
            printf("Escolheu Tosa!");
			break;
            
        case 3:
            printf("Escolheu Banho e Tosa!");
            break;
            
        default:
            printf("Opção inválida!\n");
            return;
    }

    printf("Boa escolha!\n");
    system("cls");
    
}


void Consulta() {
	printf("Super Petshop---Enzo Gomide Martins---Eng.Software\n\n");
	for(i = 0; i<= vetor_clientes; i++){	
		printf("Clientes: %s\n", nome[i]);
		printf("Cliente pet: %s\n", petnome[i]);
	}
}


int main() {
    setlocale(LC_ALL, "Portuguese");

    char senha[50];
	printf("Super Petshop---Enzo Gomide Martins---Eng.Software\n\n");

    printf("Digite a senha: ");
    scanf("%s", &senha);

    while (strcmp(senha, "patinha") != 0) {
    	
        printf("Senha incorreta!! Digite novamente.\n");
        printf("Digite novamente: ");
        scanf("%s", &senha);
        
    }
    system("cls");

    int opcao;
    do {
    	printf("Super Petshop---Enzo Gomide Martins---Eng.Software");
        printf("\n\n--------------MENU--------------\n");
        printf("1- Cadastro cliente\n");
        printf("2- Agendar BANHO ou TOSA\n");
        printf("3- Consulta\n");
        printf("4- Sair do programa\n");
        printf("\nEscolha uma opção do menu: ");
        scanf("%d", &opcao);

        switch(opcao) {
        	
            case 1:
            	while(opcao==1){
            	system("cls");
                seu_primeiro_nome();
                i++;
                opcao=0;
                break;
            }
                break;
                
            case 2:
            	system("cls");
                AgendarBanho();
                break;
                
            case 3:
            	system("cls");
                Consulta();
                break;
                
            case 4:
            	system("cls");
                printf("PROGRAMA FINALIZADO!\n");
                break;
                
            default:
                printf("Inválido!\n");
                sleep(1);
                system("cls");
                break;
                
        }
    } while (opcao != 4);

    return 0;
}   
