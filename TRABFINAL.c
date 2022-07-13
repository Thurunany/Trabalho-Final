#include <stdlib.h>
#include <stdio.h>
#include <time.h>

// criar uma variavel que salve os jogos jogados
// se jogar mais de 5 move manualmente a memoria
// manualmente mover 


int jogo(int tentativas){
    int numPlayer = 0;
    int historico[5];

    //numero aleatorio
    srand(time(NULL));
    int numSecreto = rand() % 100 + 1;

    printf("NOVO JOGO \nAdvinhe o número!\n");
    scanf("%d", &numPlayer);

    if(numPlayer != numSecreto) {
        while(numPlayer < numSecreto || numPlayer > numSecreto) {
            if (numPlayer < numSecreto){
                printf("Muito baixo! Tente um valor mais alto: \n");
            } else{
                printf("Muito alto! Tente um valor mais baixo:\n");
            }
        printf("Tente de novo: ");
        tentativas++;
        scanf("%d", &numPlayer);       
    }}

historico[5] = tentativas;
printf("%d \n", historico[5]);

return tentativas, historico[5];
}

int escolha(int opcao){
    int tentativa = 0;
    int array[5];
    array[5] = tentativa;

    switch(opcao){
         case 1:{
            return printf("Parabéns! Você acertou em %d tentativas!\n", jogo(tentativa));
            array[5] = tentativa;
         } break;
         case 2:{
            return printf("Historico = %d\n", array[5]);
         } break;
         case 3:{
            return printf("Limpar histórico\n");
         } break;      
         default: {
         }break;
    }
    return opcao;
}


int main(){
    int opcoes;

    //Jogador escolhe opção:
    while(opcoes != 4){ 
        printf("Olá jogador! Escolha uma opção:\n 1- Novo Jogo\n 2- Ver últimos 5 jogos!\n 3- Limpar histórico\n 4- Sair\n");
        scanf("%d", &opcoes);
        while(opcoes < 1 || opcoes > 4) {
            printf("Número errado, escolha uma opção valida!\nTente de novo! \nEscolha uma opção:\n 1- Novo Jogo\n 2- Ver últimos 5 jogos!\n 3- Limpar histórico\n 4- Sair\n");
            scanf("%d", &opcoes);
        }
        opcoes = escolha(opcoes);
    }   

    return EXIT_SUCCESS;
}