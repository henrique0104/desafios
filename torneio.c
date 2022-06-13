#include <stdio.h>
#include <stdlib.h>

int main (void){
    char vetor[6];
    int i;
    int vitorias = 0;

    for (i = 0; i < 6; i++){
        scanf("%c", &(vetor[i]));
        getchar();

        if (vetor[i] == 'V'){
            vitorias++;
        }

    }

    if (vitorias){
        if (vitorias>2){
            if(vitorias>4){
                printf("1");
                
                return 0;
            }
        

            else{
                printf("2");

                return 0;
            }
        
        }

        else{
            printf("3");

            return 0;
        }
        
    }

    else{
        printf("-1");
        return 0;
    }


}