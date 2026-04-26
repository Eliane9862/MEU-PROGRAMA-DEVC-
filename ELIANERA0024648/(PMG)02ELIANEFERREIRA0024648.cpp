#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"portuguese");
float area, raio;
printf("\nCalcule a area do raio:");
scanf("%f",&raio);
area = 3.14 * raio* raio;
printf(" A area e: %2.f\n", area);
return 0;


}
