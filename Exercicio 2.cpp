#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int num, num2, resultado;
	
	printf("Insira um valor: ");
	scanf("%d",&num);
	
	printf("Insira outro valor: ");
	scanf ("%d", &num2);
	
	resultado = num + num2;
	
	printf("A soma dos dois valores e: %d",resultado);
	
	return 0;
}
