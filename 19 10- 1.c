#include <stdio.h>
float area(float comprimento, float largura){
float resultado;
printf("Iniciando a funcao area\n");
fflush(stdin);
getchar();
printf("Comprimento = %.2f largura = %.2f\n",comprimento,largura);
resultado = comprimento * largura;
printf("Funcao area finalizando\n");
fflush(stdin);
getchar();
return resultado;
}

float potencia(float area, int classe){
printf("Inicio da funcao potencia\n");
fflush(stdin);
getchar();
printf("Area = %.2f classe %d\n",area,classe);
fflush(stdin);
getchar();
switch (classe){
case 1:
return area * 15;
break;
case 2:
return area * 18;
break;
case 3:
return area * 20;
break;
}
}

int numLampadas(float potencia){
float lampadas;
int resultado;
printf("Inicio da funcao numLampadas\n");
fflush(stdin);
getchar();
printf("Potencia = %.2f V\n",potencia);
fflush(stdin);
getchar();
lampadas = potencia / 60;
printf("lampadas = %.2f\n",lampadas);
fflush(stdin);
getchar();
resultado = lampadas;
printf("resultado = %d\n",resultado);
fflush(stdin);
getchar();
if ((lampadas - resultado) > 0)
resultado++;
printf("resultado = %d\n",resultado);
fflush(stdin);
getchar();
return resultado;
}

int main(){
float comp, larg,areaComodo,pot;
int classe, qtd;
printf("Informe a lagura do comodo ==> ");
scanf("%f",&larg);
printf("\nInforme o comprimento do comodo ==> ");
scanf("%f",&comp);
printf("\nInforme a classe do comodo ==> ");
scanf("%d",&classe);
printf("\nA funcao area vai ser chamada\n");
fflush(stdin);
getchar();
system("cls");
areaComodo = area(comp,larg);
printf("area do comodo %.2f\n",areaComodo);
fflush(stdin);
getchar();
printf("A funcao potencia sera chamada\n");
fflush(stdin);
getchar();
system("cls");
pot = potencia(areaComodo,classe);
printf("Potencia = %.2f V\n",pot);
fflush(stdin);
getchar();
printf("A funcao numLampadas sera chamada\n");
fflush(stdin);
getchar();
system("cls");
qtd = numLampadas(pot);
printf("Serao necessarias %d lampadas\n\n",qtd);
system("pause");
}
