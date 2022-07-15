#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    int numPlayer = 0;
    int tentativas = 0;
    int i = 5;
    int historico[5] = {0, 0, 0, 0, 0};
    int pos = 1;
    int rounds = 0;
    int numSecreto = 28;
while(rounds != 5){
    //numero aleatorio
    // srand(time(NULL));
    // int numSecreto = rand() % 100 + 1;


    printf("Advinhe o número!\n");
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
for (i = 5-1; i >= pos; i--){
    historico[i] = historico[i - 1];}

rounds++;

printf("Parabéns! Você acertou em %d tentativas!\n", tentativas);

historico[pos - i] = tentativas;
printf("%d \n", historico[i]);}
return EXIT_SUCCESS;
}
