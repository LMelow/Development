#include <stdio.h>
#include <stdlib.h>

typedef int Item;

typedef struct elemPilha {
    Item item;
    struct elemPilha *proximo;
} ElemPilha;

typedef struct {
    ElemPilha *primeiro;
} Pilha;


int main() {
    
    Pilha pilha;
    int i;
    Item item;
    int brindes = 0;
    int visi;
    char teste[4]; 
    char lista[4] = {'F','A','C','E'};
    //A primeira linha de cada caso de teste contém um inteiro N (1 ≤ N ≤ 100), representando o número de visitantes que vão receber as letras. Em cada uma das N linhas seguintes deve ser informada a combinação das 4 letras que o visitante deseja inserir no painel, separadas por espaço.
    //o número de visitantes
    scanf("%d", &visi);

    for (i = 0; i < visi; i++) {
        if (i= 0){
            scanf ("%c %c %c %c", &teste[i], &teste[i+1], &teste[i+2], &teste[i+3]);
            if (teste[0] == lista[3] || teste[1] == lista[2] || teste[2] == lista[1] || teste[3] == lista[0]){
                brindes += 1;
            }
        }
        if (i=1){
            scanf ("%c %c %c %c", &teste[i-1], &teste[i], &teste[i+1], &teste[i+2]);
            if (teste[0] == lista[3] || teste[1] == lista[2] || teste[2] == lista[1] || teste[3] == lista[0]){
                brindes += 1;
            }
        }
        if (i=1){
            scanf ("%c %c %c %c", &teste[i-2], &teste[i-1], &teste[i], &teste[i+1]);
            if (teste[0] == lista[3] || teste[1] == lista[2] || teste[2] == lista[1] || teste[3] == lista[0]){
                brindes += 1;
            }
        }
        if (i=1){
            scanf ("%c %c %c %c", &teste[i-3], &teste[i-2], &teste[i-1], &teste[i]);
            if (teste[0] == lista[3] || teste[1] == lista[2] || teste[2] == lista[1] || teste[3] == lista[0]){
                brindes += 1;
            }
        }    
    }
    printf('%d', brindes);
    
    return 0;
}
