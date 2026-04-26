    #include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>
    int main() {
	setlocale(LC_ALL, "Portuguese");
	//PMG11 somar numero de 1 á N.
	int N, soma = 0; 
	   	printf("\nDigite o numero N: ");
	   	scanf("%d",&N);
    for(int x = 1 ; x <=N;x++){
   	soma = soma + x;
    }
	printf("\nA soma de 1 ate %d é: %d", N ,soma);	
	return 0;
}
