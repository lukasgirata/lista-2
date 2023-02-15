#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <string.h>

int main(){
	int ano, idade;
	
	printf("Em que ano voce nasceu?: ");
	scanf("%d", &ano);
	
	idade = 2023 - ano;
	
	printf("Voce tem %d anos", idade);
	
	return 0;
}