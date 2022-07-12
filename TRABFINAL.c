#include <stdlib.h>
#include <stdio.h>
#include <time.h>

// criar uma variavel que salve os jogos jogados
// se jogar mais de 5 move manualmente a memoria
// manualmente mover 


//Escolhas do Jogador
// int escolha(int choice, int a){
     
// }

int jogo(int numPlayer, int tentativas){

    //numero aleatorio
    srand(time(NULL));
    int numSecreto = rand() % 100 + 1;

    printf("Advinhe o número!\n");
    scanf("%d", &numPlayer);

    if(numPlayer == numSecreto) {
        printf("Acertou!! Parabens");
    } else {
        while(numPlayer < numSecreto || numPlayer > numSecreto) {
        printf("Errou!!\n");
        printf("Tente de novo: ");
        tentativas++;
        scanf("%d", &numPlayer);
    }
}
}


int main(){
    int opcoes;

    //Jogador escolhe opção:
    printf("Olá jogador! Escolha uma opção:\n 1- Novo Jogo\n 2- Ver últimos 5 jogos!\n 3- Limpar histórico\n 4- Sair\n");
    scanf("%d", &opcoes);
    // while(opcoes < 1 || opcoes > 4) {
    //     printf("Número errado, escolha uma opção valida!\n");
    //     printf("Tente de novo: ");
    //     scanf("%d", &opcoes);
    // }

    switch (opcoes){
         case 1:{
            printf("Novo Jogo");
         } break;
         case 2:{
             return printf("Ver últimos 5 jogos");
         } break;
         case 3:{
             return printf("Limpar histórico");
         } break;
         case 4:{
             return printf("Sair");
         } break;
         default: {
             return printf("Número Errado!");
         }break;
     }

    return EXIT_SUCCESS;
}