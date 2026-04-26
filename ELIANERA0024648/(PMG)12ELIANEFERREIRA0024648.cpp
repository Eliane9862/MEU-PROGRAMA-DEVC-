    #include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>
    int main() {
	setlocale(LC_ALL, "Portuguese");
	//PMG12 digite o numero para ver a tabuada.
	int num;
	printf("\nDigite o numero para ver a tabuada:");
	scanf("%d",&num);
	printf("tabuada de %d\n", num);
	for( int x = 1; x <= 10; x ++){
		printf("%d x %d = %d\n", num , x, num * x);
	}
	return 0;	
}

