    #include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>
    int main() {
	setlocale(LC_ALL, "Portuguese");
	//PMG10
	int x = 1; 
    for(int x = 1; x<=10;x++){
   	printf(" %d ", x );
    }	
	return 0;
}
