#include<stdio.h> 
#include <locale.h>
char nome[20];
int semestre;
char curso;
float p1,p2;

main(void){
setlocale(LC_ALL,"");
printf("Informe o nome do estudante: ");
scanf("%s", &nome);

printf("Qual o semeste? ");
scanf("%i", &semestre);


printf("Digite a 1 letra do curso: ");
fflush(stdin);
scanf("%c", &curso);

printf("Digite a 1ª nota: ");
scanf("%f", &p1);

printf("Digite a 2º nota: ");
scanf("%f", &p2);


printf("Nome: %s\nSemestre: %i\ncurso: %c", nome, semestre,curso);
printf("Primeira nota: %f\nSegunda nota: %f", p1,p2);
return 0;
}

