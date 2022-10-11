#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
	
	int main(){
		setlocale(LC_ALL, "Portuguese_Brazil");
		float N1, N2, N3, Soma, Sub;
		
		printf("Calcular a Soma de 2 Numeros e Subtração de um 3° Número");
		
		printf("\nDigite N1:");
		scanf("%f", &N1);
		
		printf("\nDigite N2:");
		scanf("%f", &N2);
		
		
		Soma = (N1+N2);
		
		printf("\nO Resultado da Soma dos Numeros: %.2f E %.2f Foi: %.2f ", N1, N2, Soma);
		
		printf("\n\nDigite N3:");
		scanf("%f", &N3);
		
		Sub = (Soma - N3);
		
		printf("\nO Resultado da Subtração Entre os Numeros: %.2f E %.2f Foi: %.2f", Soma, N3, Sub);
		
		return 0;
	}
	
	
