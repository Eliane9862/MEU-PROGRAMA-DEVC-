	#include<stdio.h>
	#include<stdlib.h>
	#include<locale.h>
	int main (){
	setlocale(LC_ALL,"portuguese");
	//PMG08 verificar se os numeros são iguais.
	float n1, n2;
	printf("\nDigite o primeiro numero\n");
	scanf("%f",&n1);
	printf("\nDigite o sengundo numero:\n");
	scanf("%f",&n2);
	if(n1 > n2){
		printf("\nO primeiro numero (%.2f)é maior:\n",n1);
	}
	else if (n2 > n1){
		printf("\nO segundo numero (%.2f) é maior:\n",n2);
	}
	else{
	printf("\nOs dois numeros são iguais(%.2f).\n ",n1);
	}
	
	return 0;
}
