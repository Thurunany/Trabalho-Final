#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int i;
int historico[5];
int pos = 0;


int jogo() {
    int numPlayer = 0;
    
    // numero aleatorio
    // srand(time(NULL));
    // int numSecreto = rand() % 100 + 1;

    int numSecreto = 2;

    printf("\tNOVO JOGO \nAdvinhe o número!\n");
    scanf("%d", &numPlayer);

    int tentativas = 0;

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
    
    if(pos >= 5) {
        // Move o histórico pra trás!
        // for de 0 até 4, 3 a 4 linhas
        historico[4] = tentativas;
    } else {
        historico[pos] = tentativas;
    }

    pos++;
    
    return tentativas;
}

void executa(int opcao) {
    switch(opcao) {
         case 1: {
            printf("Parabéns! Você acertou em %d tentativas!\n", jogo());
         } break;
         case 2: {
            if(pos > 0) {
                int quantidade = pos;
                if(quantidade > 5) {
                    quantidade = 5;
                }
                for(i = 0; i < quantidade; i++) {
                    printf("Jogo %d:  ",i+1);
                    printf("%d tentativas\n", historico[i]);
                }
                printf("Este é seu historico!\n");
            } else {
                printf("O histórico está vazio!\n");
            }
         } break;
         case 3: {
            for(i=0; i<=4; i++){
                historico[i] = 0;
            }
            for(i=0; i<=4; i++){
                printf("Jogo %d:  ", i+1);
                printf("%d tentativas\n", historico[i]);
            }
            printf("Este é seu historico agora limpo!\n");
         } break;      
         default: {
         } break;
    }
}

int main(){
    int opcoes;
    //Jogador escolhe opção:
    while(opcoes != 4){ 
        printf("\n \t\t MENU \nOlá jogador! Escolha uma opção:\n 1- Novo Jogo\n 2- Ver últimos 5 jogos!\n 3- Limpar histórico\n 4- Sair\n");
        scanf("%d", &opcoes);
        while(opcoes < 1 || opcoes > 4) {
            printf("Número errado, escolha uma opção valida!\nTente de novo! \nEscolha uma opção:\n 1- Novo Jogo\n 2- Ver últimos 5 jogos!\n 3- Limpar histórico\n 4- Sair\n");
            scanf("%d", &opcoes);
        }
        executa(opcoes);
    }
    return EXIT_SUCCESS;
}