#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int num;
	float raiz;
	
	printf("Digite um valor: ");
	scanf("%d", &num);
	raiz = sqrt(num);
	
	printf("A raiz e: %f", raiz);
	
	return 0;
}