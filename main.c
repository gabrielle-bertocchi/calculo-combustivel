#include <stdio.h>
#include <stdlib.h>

int Calculo(float vGas, float vEta);

int main(){
    printf("##### EcoCAR #####\n");

    float precoGasolina, precoEtanol;

    printf("Qual o preço da Gasolina?\n");
    scanf("%f", precoGasolina);

    printf("Qual o preço da Etanol?\n");
    scanf("%f", precoEtanol);

    int resultado = Calculo (precoGasolina, precoEtanol);

    if (resultado == 0){
        printf("Compensa Abastecer com gasolina\n");
    }
    else if(resultado == 1){
        printf("Compensa  Abastecer com etanol\n");
    }
    else{
        printf("Sāo equivalentes!\n");
    }

    return 0;
}

int Calculo(float vGas, float vEta){
    if((vGas * 0.70) < vEta){
        return 0;
    }
    else if((vGas * 0.70) > vEta ){
        return 1;
    }
    else{
        return 2;
    }
}