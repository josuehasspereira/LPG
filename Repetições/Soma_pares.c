#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int m, n, i, men = 0, mai = 0, som = 0;
    printf("Digite dois numeros: ");
    scanf("%i%i", &n, &m);
    printf("Numeros digitados: %i, %i\n", n, m);
    
    if(m<n){
        mai = n;
        men = m;
    } else if (m>n){
        men = n;
        mai = m;
    }

    for(i=men; i<mai; i++){
        //printf("%i\n", i); //Debuger
        if(i % 2 == 0){
            som+=i;
        }
        
    }
    printf("Soma dos impares: %i\n", som);
    return 0;
}
