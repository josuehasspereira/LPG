#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    
    int LIN, COL, i, j, k;
    scanf("%i%i", &LIN, &COL);
    
    double som = 0;
    int mt1[LIN][COL];
    
    for(i=0; i<LIN; i++){
        for(j=0;j<COL;j++){
            printf("\nDigite a entrada [%i][%i]: ", i+1, j+1);
            scanf("%i", &k);
            mt1[i][j]=k;
        }
    }
   printf("\n\n----Matrix %ix%i----\n\n", LIN, COL); 
   for(i=0; i<LIN; i++){
        for(j=0;j<COL;j++){
            printf("%4i", mt1[i][j]);
            
        } printf("\n");
    }
    
    for(i=0; i<LIN; i++){
        for(j=0;j<COL;j++){
            som+=(mt1[i][j] * mt1[i][j]);
            
        }
    }
    printf("\n%f", sqrt(som));
    
    
    
    return 0;
}