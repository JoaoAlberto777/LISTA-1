#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
	int main(){
			setlocale(LC_ALL, "Portuguese_Brazil");
			float N1, N2, N3, N4, Produto;
			
			printf("Calcular o produto de 4 Números\n");
				
				printf("\nDigite N1:");
			scanf("%f",&N1);
			
				printf("\nDigite N2:");
			scanf("%f",&N2);
			
				printf("\nDigite N3:");
			scanf("%f",&N3);
			
				printf("\nDigite N4:");
			scanf("%f",&N4);
			
			Produto = (N1*N2*N3*N4);
			
			printf("O Valor do Produto dos Numeros: %.2f, %.2f, %.2f, %.2f, Foi: %.2f", N1 ,N2 ,N3 ,N4 ,Produto);
	
	return 0;
}
