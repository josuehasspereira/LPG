#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	int x, j, i;
	
	printf("Digite um numero: ");
	scanf("%i", &x);
	
	for(i = 1; i <= x; i++){
		for(j = 1; j <= x; j++){
			if(i == j){
				printf("*");	
			} else if ((i+j) == (x + 1)){
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
	
	
}
