#include<stdio.h>
#include<locale.h>
float valor1, valor2, media;

void cadastrar(){//fun��o cadastrar 2 valores
	printf("Digite o primeiro valor:");
	scanf("%f", &valor1);
	printf("Digite o segundo valor:");
	scanf("%f", &valor2);
}

void fx_media(){//fun��o para a media
	media=(valor1 + valor2)/2;
}

void mostrar_resultado(){//fun��o resultado
printf("1� valor �: %.1f\n", valor1);
printf("2� valor �: %.1f\n", valor2);
printf("A media �: %.1f\n", media);
if (media>7){
	printf("Aprovado\n");
} else{
	printf("Reprovado\n");
}
}

int main() {
	setlocale(LC_ALL,"");
	cadastrar();
	fx_media();
	system("cls");
	mostrar_resultado();
}
