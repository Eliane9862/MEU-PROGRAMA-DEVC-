#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"portuguese");
int  x;
float y;

printf(" Tabuada de adição\n");
for(x=1;x<=10;x++)
printf("\n 1 + %d = %d",x,1+x);

printf(" \nTabuada de subtração");
for(x=1;x<10;x++)
printf("\n 1 - %d = %d",x,1-x);

printf(" \nTabuada de multiplicação");
for(x=1;x<10;x++)
printf("\n 2* %d = %d",x,x*2);



}












