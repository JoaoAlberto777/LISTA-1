#include <stdio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL, "Portugese_Brazil");
		
		int N1, N2, Quociente, Resto;
		
		printf("Calcular Quaciente e Resto");
		
			printf("\nDigite N1:");
		scanf("%d", &N1);
			printf("\nDigite N2:");
		scanf("%d", &N2);
		
		
		Quociente = N1/N2;
		printf("\n O Quociente o entre os numeros : %.2d E %.2d Foi: %.2d", N1, N2, Quociente);
		
		Resto = N1 % 2;
		printf("\n O Resto da divisão foi: %.2d", Resto);
		
		return 0;
	}
