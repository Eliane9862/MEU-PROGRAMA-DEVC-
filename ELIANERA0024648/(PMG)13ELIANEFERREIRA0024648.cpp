	    #include <stdio.h>
		#include <stdlib.h>
		#include <locale.h>
	    int main() {
		setlocale(LC_ALL, "Portuguese");
		int x = 1;
	    printf("Numeros pares de 1 a 50:\n");
	    for (int x = 1; x <= 50; x++) {
	        if (x % 2 == 0) {
	            printf("%d ", x);
	        }
	    }
	    return 0;
	}
		
