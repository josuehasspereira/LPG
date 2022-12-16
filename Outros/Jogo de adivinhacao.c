#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

int n, dif, chute, i, sec, p = 0;

do{
    printf("Bem vindo ao jogo de advinhacao!\n");
    printf("Selecione a dificuldade do jogo\n(1) Facil\n(2) Medio\n(3) Dificil\n(4) Sair\n");
    printf("Dificuldade: ");
    scanf("%i", &dif);

        if(dif > 0 && dif < 4){
            srand(time(0));
            sec = rand() % 10;
            //printf("%i", sec); Debugger
            switch(dif){
                case 1: n = 7; break;
                case 2: n = 15; break;
                case 3: n = 22; break;}

            for(i = 1; i <= 6; i++){
                printf("\nVoce tem %i de 6 tentativas\n", i);
                printf("Escolha: ");
                scanf("%i", &chute);
                if(chute == sec){
                    printf("Parabens, voce acertou!!\n"); break;
                } else if(chute < sec){
                    printf("Voce errou, seu chute e menor que o secreto!!");
                } else if(chute > sec){
                    printf("Voce errou, seu chute e maior que o secreto!!");
                }
            }
            p = 110 - (i * 10);
            printf("Sua pontuacao e de: %i", p);
        } else if (dif > 4 || dif < 1){
            printf("Digite uma opcao valida!\n");
        }

}while(dif < 4 || dif > 4);

return 0;

}
