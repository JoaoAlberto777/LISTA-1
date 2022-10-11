#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
	int main(){
		setlocale(LC_ALL, "Portuguese_Brazil");
		
		float N1, N2, N3, Media;
		
		printf("Calcular a Media de 2 Numeros: \n");
		
		printf ("\n Digite N1: ");
		scanf("%f", &N1);
		
		printf("\n Digite N2: ");
		scanf("%f", &N2);
	
		Media = (N1 + N2)/2;
		
		printf("\n O Valor Calculado Da Media Entre Os Numeros : %.2f, %.2f, Foi: %.2f", N1, N2, Media);
		
		return 0;
		
	}
