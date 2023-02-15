#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char texto[100];
	int qtd;
	
	printf("Digite uma string: ");
	fgets(texto, 100, stdin);
	
	qtd = strlen(texto);
	qtd -= 1;
	
	printf("O texto %s e: %d", texto, qtd);
	
	return 0;
}