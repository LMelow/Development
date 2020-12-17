#include <stdio.h>
#include <stdlib.h>


typedef struct elemFila {

    struct elemFila *proximo;
} ElemFila;

typedef struct {
    ElemFila *primeiro;
    ElemFila *ultimo;
} Fila;





int main() {
    Fila fila;
    int visi;
    int i;
    char lista[] = {'F','A','C','E'};
    //o número de visitantes
    scanf("%d", &visi);

    for (i = 1; i <= visi; i++) {
        scanf("%s %s %s %s", &lista[i], &lista[i+1], &lista[i+2], &lista[i+3]);

    
    }

    printf("Quantidade de itens presentes na fila: %d\n");


    return 0;
}
