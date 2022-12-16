//Josué Hass Pereira

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int cel, far, kel;
	
int convt_temp(){
    far = (1.8 * cel) + 32;
    kel = cel + 32;
    printf("Temperatura em F°: %i\nTemperatura em K°: %i", far, kel);
}
	
	
	
int main(){
	
	printf("Digite a temperatura em C°: ");
	scanf("%i", &cel);
	return convt_temp();
	
	
	//return 0;
}