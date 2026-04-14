#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
		// #include <stdio.h>  // Biblioteca Standard Input and Output (Entrada e Saída Padrão).
		                    // É necessária para usar as funções printf (escrever na tela) 
		                    // e scanf (ler dados digitados pelo usuário).
		                    // #include <stdlib.h> // Biblioteca Standard Library (Biblioteca Padrão).
		                    // Oferece funções de utilidade geral, como o comando system("pause") 
		                    // para a tela não fechar sozinha e funções de alocação de memória.
		                   // #include <locale.h> // Biblioteca de Localização (Regionalização).
		                    // Serve para configurar o idioma do programa, permitindo que 
		                    // acentos e caracteres especiais (como o 'ç' e 'ã') apareçam 
		                    // corretamente no console através da função setlocale.
                    
int main () {
    // Adicionado o ponto e vírgula no final da linha
    setlocale(LC_ALL, "portuguese");
    
    int x;
    float y; 

    printf("Tabuada de adição\n");

    for(x = 1; x <= 10; x++) {
        // Mudamos o cálculo de '1 * x' para '1 + x' para ser uma soma
        printf("\n1 + %d = %d", x, 1 + x);
    }
// Boa prática para indicar que o programa terminou com sucesso
    return 0; 
}
