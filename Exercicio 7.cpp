#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <math.h>

int main(){

	setlocale(LC_ALL,"Portuguese");
	int i, num, sorteio;
	
	srand(time(NULL));
	sorteio=rand() % 10;
	
	printf("Escolha um numero de 1 a 10: ");
	scanf("%d", &num);
	
	printf("O numero sorteado e: %d", rand() % 10);
	
	return 0;
}
	