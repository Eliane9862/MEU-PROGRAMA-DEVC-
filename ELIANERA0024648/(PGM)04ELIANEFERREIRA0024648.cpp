	#include<stdio.h>
	#include<stdlib.h>
	#include<locale.h>
	int main(){
	setlocale(LC_ALL,"portuguese");	
	//Calcule a média, km e consumo.
	float media, km, consumo;
	printf("\nQual a distancia percorrida do automovél: ");
	scanf("%f",&km);
	printf("\nQualcule o total do conbustivél gastos:");
    scanf("%f",&consumo);
	media = km / consumo;
    printf("\nConsumo total gasto é:%.2f\n",media);
	return 0;
}
