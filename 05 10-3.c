#include<stdio.h>
#include<locale.h>
char nome [7] [50];
int i, pe[7], pp[7], total[7], local[7];

int main(void){
	setlocale(LC_ALL,"");
	for(i=1; i<=3; i++){
		printf("Dig. o nome do candidato: ");
		fflush(stdin);
		gets(nome[i]);
		
		printf("Dig. a nota da prova teorica: ");
		scanf("%i", &pe[i]);
		
		printf("Dig. a nota da prova pratica: ");
		scanf("%i",&pp[i]);
	}
	system("cls");
		
	for(i=1; i<=3; i++){
		
		(total[i]= pp[i]+pe[i]);
		
		printf("Nome: %s\n", nome[i]);
		printf("Prova teorica: %i\n", pe[i]);
		printf("Prova pratica: %i\n", pp[i]);
		printf("O total de pontos foi %i\n", total[i]);
		if(total[i]>=160){
			printf("APROVADO\n\n");
			printf("--------escolha o local--------\n");
			printf(" 1-TAGUATINGA\n 2-GUARÁ\n 3-RIACHO\n");
			scanf("%i\n", local[i]);
			
			switch(local[7]){
				case 1:
					printf("Você escolheu Taguatinga\n");
				break;
				case '2':
					printf("Você escolheu Guará\n");
				break;	
				case 3:
					printf("Você escolheu Riacho\n");
				break;
				default:
					printf("Opção invalida.\n");
			}
			
		}else{
			printf("REPROVADO\n\n");
			}
	}
		
}
