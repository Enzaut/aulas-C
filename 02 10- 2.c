#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int alunos, i=1, opcao;
float n1, n2, media;
  char nome [50];

main(void){
   setlocale(LC_ALL,"Portuguese");
  
      printf("Quantos alunos deseja cadastrar?\n"); 
      scanf("%i", &alunos);
      while(i<=alunos){
      printf("Digite a primeira nota:\n ");
      scanf("%f", &n1);
      printf("Digite a segunda nota:\n ");
      scanf("%f", &n2);
      media = (n1+n2)/2;
      printf("Media: %.1f\n\n", media);
      
      if(media>=7){
      	printf("\nAPROV.");
      	if(media == 10){
      		printf("\nParabens!!");
      		//HORA DO PRESENTE	
      		printf("Escolha um presente: 1- 2- 3-...");
      		scanf("%i", &opcao);
      		switch(opcao){
      			case 1:
      				printf("1......");
				  	break;
				case 2:
					printf("2......");
					break;
				case 3:
					printf("3......");
					break;
				default:
					printf("Escolheu errado");
			  } //FIM DO SWITCH
		  } //FIM MEDIA 10
	  }else{
	  	printf("\nREP.");
	  }
	  i++;
    }
    printf("\nFIM DO PROGRAMA");
  return 0;
  }
