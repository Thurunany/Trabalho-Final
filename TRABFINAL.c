#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int tentativas = 0;
int i;
int historico[4];

int jogo(){
    int numPlayer = 0;
    int pos = 0;
    //numero aleatorio
    // srand(time(NULL));
    // int numSecreto = rand() % 100 + 1;

    int numSecreto = 28;

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
    
    for(i=4-1;i>=pos-1;i--){
        historico[i+1]=historico[i];
        historico[pos-1]= tentativas;
    }    
    
    return tentativas;
}

int contador(){
    int pos = 0;
    int size = 4;
    
    for(i=0;i<=4;i++){
        printf("Jogo %d:  ",i+1);
        printf("%d tentativas\n", historico[i]);
    }
}


int escolha(int opcao){
    switch(opcao){
         case 1:{
            return printf("Parabéns! Você acertou em %d tentativas!\n", jogo(tentativas));
         } break;
         case 2:{
            return printf("Este é seu historico!\n", contador());
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
        printf("\nMENU\nOlá jogador! Escolha uma opção:\n 1- Novo Jogo\n 2- Ver últimos 5 jogos!\n 3- Limpar histórico\n 4- Sair\n");
        scanf("%d", &opcoes);
        while(opcoes < 1 || opcoes > 4) {
            printf("Número errado, escolha uma opção valida!\nTente de novo! \nEscolha uma opção:\n 1- Novo Jogo\n 2- Ver últimos 5 jogos!\n 3- Limpar histórico\n 4- Sair\n");
            scanf("%d", &opcoes);
        }
        opcoes = escolha(opcoes); 
    }
    return EXIT_SUCCESS;
}