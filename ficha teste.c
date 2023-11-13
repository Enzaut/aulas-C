#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXIMO_DE_CLIENTES 10

void clear_screen() {
    system("cls || clear");
}


void print_menu() {
	printf("Super_Petshop_Enzo Gomide_Eng.software\n\n");
    printf("MENU\n");
    printf("1 - Cadastrar Cliente\n");
    printf("2 - Agendar BANHO / TOSA\n");
    printf("3 - COSULTA\n");
    printf("4 - IMPRIMIR RELATÓRIO GERAL\n");
}

void print_error() {
    printf("Opção incorreta\n");
}

void print_client(char *name, char *pet_name, char *phone) {
    printf("Nome: %s\n", name);
    printf("Pet(s): %s\n", pet_name);
    printf("Telefone: %s\n", phone);
}

void print_appointment(char *pet_name, int option) {
    printf("Pet: %s\n", pet_name);
    switch (option) {
        case 1:
            printf("Opção: Banho\n");
            break;
        case 2:
            printf("Opção: Tosa\n");
            break;
        case 3:
            printf("Opção: Banho e Tosa\n");
            break;
        default:
            break;
    }
}

void print_consultation(char *date, char *client_name, char *doctor_name) {
    printf("Data: %s\n", date);
    printf("Cliente: %s\n", client_name);
    printf("Dr./Drª: %s\n", doctor_name);
}

int main() {
    char password[20];
    char shop_name[50];
    char client_names[MAXIMO_DE_CLIENTES][50];
    char pet_names[MAXIMO_DE_CLIENTES][50];
    char phones[MAXIMO_DE_CLIENTES][20];
    char dates[MAXIMO_DE_CLIENTES][20];
    char doctors[MAXIMO_DE_CLIENTES][50];
    int num_clients = 0;
    int num_appointments = 0;
    int num_consultations = 0;
    int option;
    int i;

    printf("Digite a senha: ");
    scanf("%s", password);

    while (strcmp(password, "patinha") != 0) {
        printf("Senha incorreta. Digite novamente: ");
        scanf("%s", password);
    }

    printf("Digite o nome do petshop: ");
    scanf("%s", shop_name);

    while (1) {
        clear_screen();
        print_header(shop_name);
        print_menu();

        printf("\nDigite uma opção: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                clear_screen();
                print_header(shop_name);
                printf("CADASTRAR CLIENTE\n\n");

                if (num_clients >= MAXIMO_DE_CLIENTES) {
                    printf("Número máximo de clientes cadastrados atingido.\n");
                    break;
                }

                printf("Nome: ");
                scanf("%s", client_names[num_clients]);
                printf("Pet(s): ");
                scanf("%s", pet_names[num_clients]);
                printf("Telefone: ");
                scanf("%s", phones[num_clients]);

                num_clients++;

                printf("\nPressione qualquer tecla para voltar ao menu principal...");
                getchar();
                getchar();
                break;
            case 2:
                clear_screen();
                print_header(shop_name);
                printf("AGENDAR BANHO OU TOSA\n\n");

                if (num_appointments >= MAXIMO_DE_CLIENTES) {
                    printf("Número máximo de agendamentos atingido.\n");
                    break;
                }

                printf("Nome do Pet: ");
                scanf("%s", pet_names[num_appointments]);
                printf("Escolha uma opção (1-Banho / 2-Tosa / 3-Banho e Tosa): ");
                scanf("%d", &option);

                num_appointments++;

                printf("\nPressione qualquer tecla para voltar ao menu principal...");
                getchar();
                getchar();
                break;
            case 3:
                clear_screen();
                print_header(shop_name);
                printf("CONSULTA\n\n");

                if (num_consultations >= MAXIMO_DE_CLIENTES) {
                    printf("Número máximo de consultas atingido.\n");
                    break;
                }

                printf("Data: ");
                scanf("%s", dates[num_consultations]);
                printf("Cliente: ");
                scanf("%s", client_names[num_consultations]);
                printf("Dr./Drª (1 - seu nome / 2- nome do professor): ");
                scanf("%d", &option);

                if (option == 1) {
                    strcpy(doctors[num_consultations], "seu nome");
                } else if (option == 2) {
                    strcpy(doctors[num_consultations]
