//Josue Hass Pereira

#include <stdio.h>
#include <string.h>

int main(){
    char *arr3[6] = { "azul",
                    "amarelo",
                    "vermelho",
                    "verde",
                    "marrão",
                    "rosa"};
    char x[50];
    int nao_achou = 0;
    printf("Digite uma cor: ");
    scanf("%s", &x);
    
    for(int i=0; i<6;i++){
        if(strcmp(arr3[i], x) == 0){
            printf("A cor está no array");
            nao_achou = 1;
        } 
    }
    if(nao_achou == 0){
        printf("Não esta no array");
    }
}