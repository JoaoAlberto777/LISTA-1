#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
	int main(){
		setlocale(LC_ALL, "Portuguese_Brazil");
		float N1, N2, N3, Media;
		printf("Calcular a Media de 3 Numeros: \n");
		printf ("\n Digite N1: ");
		scanf("%f", &N1);
		
		printf("\n Digite N2: ");
		scanf("%f", &N2);
		
		printf("\n Digite N3: ");
		scanf("%f", &N3);
		
		Media = N1 + N2 + N3/3;
		
		printf("\n O Valor Calculado Da Media Entre Os Numeros : %.2f, %.2f, %.2f Foi: %.2f", N1, N2, N3, Media);
		
		return 0;
		
	}
	//O valor da media n�o foi calculado corretamente pois sem os parenteses a primeira oper��o � N3/3, e so depois ira somar com N1 e N2, ou seja 8/3 que dara 2.6 + 6 + 7 = 15.6
