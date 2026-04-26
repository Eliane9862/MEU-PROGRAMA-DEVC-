	#include<stdio.h>
	#include<stdlib.h>
	#include<locale.h>
	int main (){
	setlocale(LC_ALL,"portuguese");
	//PMG 05 TARIFA DE AGUA/TARIFA ESGOTO/VALOR TOTAL
	float tarifaAgua, tarifaEsgoto,valorTotal;
	printf("\nDigite o valor da tarifa de água:");
	scanf("%f",&tarifaAgua);
	tarifaEsgoto = tarifaAgua *0.8;
	valorTotal = tarifaAgua + tarifaEsgoto;
	printf("\nTarifa de Agua: R$ %.2f\n", tarifaAgua);
	printf("\nTarifa de Esgoto(0.8%%): R$ %.2f\n", tarifaEsgoto);
	printf("\nValor total a pagar:R$%.2f\n", valorTotal);
	printf("\n:)");	
	return 0;		
}
