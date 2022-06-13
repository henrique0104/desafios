#include<stdio.h>

void verificador(int a[13]){
    int erro = 0;
    int soma = 0;
    int i;
    
    for(i = 0; i < 13; i ++){
        if (a[i]>1){
            erro = 1;
            break;
        }
        
        soma += a[i];
    }

    if (erro){
        printf("erro\n");
    }

    else{
        printf("%d\n", 13 - soma);
    }

}


int main(void){
    int C[13];
    int E[13];
    int U[13];
    int P[13];

    int coisa;
    int i;

    int numero = 0;
    int contador = 1;
    int erro = 0;
    int soma = 0;

    for (i = 0; i<13;i++){
        C[i] = 0;
        E[i] = 0;
        U[i] = 0;
        P[i] = 0;
    }


    while (1){
        coisa = getchar();

        if (coisa == '\n'){
            if((contador<4) || (contador>157)){
                printf("string invalida");
            }
            break;
        }
        
        
        if ((contador%3) == 0){
            
            if(coisa == 'C'){
                C[numero-1]++;
            }

            if(coisa == 'E'){
                E[numero-1]++;
            }

            if(coisa == 'U'){
                U[numero-1]++;
            }

            if(coisa == 'P'){
                P[numero-1]++;
            }

            numero = 0;
            contador++;
            continue;
        }

        if ((coisa >= '0') && (coisa<= '9')){
            numero += 10*numero + (coisa - '0');
        }

        contador++;
    }
    
    if ((contador>3)&&(contador<158)){
        verificador(C);
        verificador(E);
        verificador(U);
        verificador(P);
    }


    return 0;

}