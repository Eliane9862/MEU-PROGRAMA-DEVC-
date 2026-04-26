	#include<stdio.h>
	#include<stdlib.h>
	#include<locale.h>
	int main (){
	setlocale(LC_ALL,"portuguese");
	float numero;
	printf("\nDigite o numero:");
	scanf("%f", &numero);
	if(numero >0 ){
		printf("\nO numero %.2f é possitivo!!!:",numero);	
	}
	else if (numero < 0){
	printf("\nO numero %.2f é negativo:",numero);	
	}
	else{
	printf("\nNumero é zeroooo!!!\n0");
	}
	return 0;
	}
