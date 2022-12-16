//Faça um programa que converta um numero decimal para bit, com entrada do usuario, de 0 a 255, usando bit a bit


#include <stdio.h>
#include <stdlib.h>

int convertBin(int n){
    int cont = 0, r, i;
    
    printf("\nNumero %d em Binario: ", n); 	
    
    for(i = 7; i>= 0; i--){
        r = n >> i;
        if (r & 1){
            printf("1");
        } else {
            printf("0");
            cont++;
        }
    }
    printf("\nQuantidade de zeros: %d", cont);
}

int main(){
    int n;
    
    printf("Digite um numero entre 0 e 255: ");
    scanf("%d", &n);
    convertBin(n);
    
    return 0;
}

