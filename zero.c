#include <stdio.h>
#include <stdlib.h>


int main (void){


    int* ponteiro;
    int tamanho;
    int i;


    int contador = 0;
    int soma = 0;
    scanf("%d",&tamanho);
    getchar();

    ponteiro = (int*)malloc(sizeof(int));

    for (i = 0; i < tamanho; i++){
        
        ponteiro = (int*)realloc(ponteiro, (contador + 1)*sizeof(int));
        scanf("%d",(ponteiro + contador));
        getchar();

        if (*(ponteiro + contador)){
            contador++;
        }

        else{
            contador--;
        }
    }



    for (i = 0; i < contador; i++){
        soma += *(ponteiro + i);
    }

    printf("\n");
    printf("soma = %d", soma);

    return 0;
}
