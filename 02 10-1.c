#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
  char opcao = 's';
  char nome [50];

main(void){
   setlocale(LC_ALL,"Portuguese");
  
    while((opcao =='s')|| (opcao=='S')){
      printf("Cadastrar funcion�rio(a): ");
      fgets(nome, 50, stdin);
      printf("%s\n", nome);

      printf("Deseja cadastar outro(a) funcion�rio(a)? [s] ou [n]");
      gets(&opcao);
      
      system("cls");
    }
  return 0;
  }
