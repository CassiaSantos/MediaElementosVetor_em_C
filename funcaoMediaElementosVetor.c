#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM_VETOR 50

//funcão que imprime um vetor:
void printArray (int arranjo[], int tamArranjo) {
    printf("\nArranjo: [");
    for (int i = 0; i < tamArranjo -1; i++)
        printf("%d, ", arranjo[i]);
    printf("%d]", arranjo[tamArranjo -1]);
}

//funcão que calcula a média dos elementos do vetor:
float mediaElementos (int arranjo[], int tamArranjo) {
    int acumuladorSoma = 0;
    for (int i = 0; i < tamArranjo; i++)
        acumuladorSoma += arranjo[i];
    return (float) acumuladorSoma/tamArranjo;
}

void main() {
    
    //Declaração e inicialização do vetor:
    srand(time(0));
    int arranjo[TAM_VETOR];
    for (int i = 0; i < TAM_VETOR; i++) {
        arranjo[i] = rand() % 101;
    }
    
    //chamada da função que imprime o vetor na tela:
    printArray(arranjo, TAM_VETOR);
    
    //chamada da função que imprime a média dos elementos do vetor:
    printf("\n\nQuantidade de elementos: %d", TAM_VETOR);
    printf("\nMédia dos elementos do vetor: %.2f\n\n", mediaElementos(arranjo, TAM_VETOR));
}
