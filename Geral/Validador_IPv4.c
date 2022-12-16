#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    int i, result,cont = 0;
	char ip[50];
	char *teste[50];
	
	printf("Digite um IPv4: ");
	scanf("%s", ip);

	char *pt;
	pt = strtok(ip, ".");
	while(pt){
		teste[i] = pt;
		pt = strtok(NULL, ".");	
	    i++;
	}
	for(i = 0; i <= 3; i++){
//		result = strtol(teste[i], NULL, 10);
//		if(result > 255 || result < 0){
//			printf("Endereco invalido!");
//			return 0;
//		}
		if(strcmp(teste[i],"0") < 0 || (strcmp(teste[i],"255") > 0)){
			printf("Endereco invalido!");
			return 0;
		}
	}
	
	printf("Endereco valido!");
	

	return 0;
	
}
