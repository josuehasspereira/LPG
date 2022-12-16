#include <stdio.h>
#include <ctype.h>

int main(void) {
    
    char nome[100];
    scanf("%s", nome);
    
    if((nome[0] > 'a' && nome[0] < 'z') || (nome[0] > 'A' && nome[0] < 'Z')){
        printf("É uma letra");
    } else if (isdigit(nome[0])){
        printf("É um numero");
    } else {
        printf("É um caractere especial");
    }
    return 0;
}