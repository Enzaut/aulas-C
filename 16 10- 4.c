#include<stdio.h>
void outra(void);
void pedra(void);
int x = 5;

int main(void){
	int x = 10;
	printf("\nEm main() x = %d", x);
	outra();
	pedra();
}

void outra(void){
printf("\n Em outra() x = %d", x);
}

void pedra(void){
	int x = 20;
printf("\n Em pedra() x = %d", x);
}
