#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    int i, v, soma = 0;
    char s[100];

    for(i = 0; i < 4; i++){
        printf("Digite o %i valor para ser convertido para int: ", i);
        scanf("%s", &s);
        v = atoi(s);
        soma += v;
    }
    printf("Soma: %i", soma);
    
    return 0;
}
