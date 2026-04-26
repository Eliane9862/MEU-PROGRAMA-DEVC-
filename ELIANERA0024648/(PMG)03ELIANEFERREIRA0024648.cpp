#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"portuguese");	
//Calcule o valor da idade
float idade;
printf(" Qual sua idade em dias?");	
scanf("%f",&idade);
idade = idade * 365.25;
printf("Sua idade em dias é: %.2f\n",idade);
	
}



