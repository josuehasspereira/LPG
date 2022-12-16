#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main()
{
    
    char str[100];
    char a;
    int tam;
    
    printf("Digite uma palavra qualquer: ");
    fgets(str, 100, stdin);
    tam = strlen(str);
    //printf("%i\n", tam-1);
    
    for(int i = 0; i < tam; i++){
        if(islower(str[i])){
            printf("%c", toupper(str[i]));
        } else if (isupper){
            printf("%c", tolower(str[i]));
        }
    }
    return 0;
}