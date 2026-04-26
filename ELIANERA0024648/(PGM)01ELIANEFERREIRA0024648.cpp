#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
    //PMG01: Eliane criando o primeiro projeto avaliativo,quanto de din eu tenho.
	int main(){
    setlocale(LC_ALL,"portuguese");
    float DIN;
    printf("\nQuanto de dinheiro voce tem? ");
    scanf("%f", &DIN);
    if (DIN >= 50) {
        printf("\nOba! Estou ricaaaaaaaaaa, posso sair!\n");
    } 
    else {
        printf("\nQue pena '-' não estou rica, vou ficar em casa dormindo.\n");
   }   
   return 0;
}










