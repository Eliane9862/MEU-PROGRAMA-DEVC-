		#include <stdio.h>
		#include <stdlib.h>
		#include <locale.h>
	    int main() {
		setlocale(LC_ALL, "Portuguese");
		//PMG09 verificação dos numeros pares, impares.
	    int numero;
	    printf("Digite um número inteiro: ");
	    scanf("%d", &numero);
	    if (numero % 2 == 0) {
        printf("\nO número %d é PAR! \n", numero);
	    } 
	    else {
        printf("\nO número %d é ÍMPAR! \n", numero);
	    }
	    return 0;
		}
