#include <stdio.h>
enum semana {segunda,terca,quarta};
main(void){
	enum semana dia = terca;
	switch(dia){
		case segunda:
			printf("Segunda feira");
			break;
		case terca:
			printf("Terca feira");
			break;
		case quarta:
			printf("Quarta feira");
			break;
		default:
		("Valor invalido");
		break;
	}
}
