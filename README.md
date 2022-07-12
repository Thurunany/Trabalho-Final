# Trabalho Final Algoritmos

Uma empresa gostaria de oferecer a seus funcionários um jogo simples de adivinhação que permita que
eles passem o seu tempo no horáriod e almoço. Nessa empresa, no entanto, os funcionários tem acesso
somente a computadores em modo texto (terminal). 

Especificação
Ao ser iniciado, seu programa deve cumprimentar o usuário e imprimir um pequeno menu de opções. As
opções possíveis são:
. Novo jogo
. Ver últimos 5 jogos
. Limpar histórico
. Sair

Seu programa deve ler a opção escolhida pelo usuário e proceder como será descrito nas seções
seguintes. Caso o usuário digite qualquer coisa diferente dos números de 1 a 4, você deve informar que a
opção não é válida e voltar a exibir o menu.

Novo jogo
Caso a opção 1 seja escolhida no menu inicial, seu programa deve começar um novo jogo de
adivinhação. O computador deve escolher e se lembrar de um número secreto aleatório entre 1 e 100,
que não será exibido ao usuário, e o jogador tentará adivinhá-lo, informando números dentro desse
intervalo.

Se o jogador errar o número, o programa deve informar a ele se o número informado na tentativa foi
maior ou menor que o número secreto, e solicitar que ele tente novamente (até acertar). Se o jogador
acertar, o jogo deve parabenizá-lo e informar quantas tentativas foram necessárias para que ele
acertasse (ou seja, o programa deve se lembrar de quantas tentativas já foram feitas).
Em linguagens como C, podemos utilizar números aleatórios através da função rand(), o que é feito em
duas etapas. No começo do programa, apenas uma vez, deve-se executar o seguinte comando:

``````
srand(time(NULL));
``````


Esse comando inicia o código para a geração de números aleatórios. A partir desse momento, é possível
gerar números aleatórios da seguinte forma:

``````
int secret = rand() % 100 + 1;
``````

Isto é, a função rand() gera um número de 4 bytes aleatório, e então aplicamos o resto da divisão por
100 para termos um valor entre 0 e 99. Ao somarmos 1, temos um valor entre 1 e 100, como o desejado
para o problema. Nota-se que, cada vez que a função rand() é chamada, um número diferente é
retornado.

Por exemplo, considere que o número secreto gerado pelo computador tenha sido 76, a rodada se
comportaria da seguinte forma:

Tente adivinhar um número de 1 a 100:
 25
Muito baixo! Tente um valor mais alto:
 88
Muito alto! Tente um valor mais baixo:
 69
Muito baixo! Tente um valor mais alto:
 76
Parabéns! Você acertou em 4 tentativas!
(Onde os números 25, 88, 69 e 76 foram fornecidos pelo usuário.)


Ao terminar a rodada (isto é, após o usuário acertar o número secreto da vez), o programa deve registrar
quantas tentativas foram necessárias em seu histórico, e voltar a apresentar o menu inicial.

``````
Ver os últimos 5 jogos
``````

Os 5 últimos jogos devem ser armazenados na memória pelo programa, e, quando o usuário escolher a
opção 2 do menu inicil, o computador deve exibir os 5 últimos jogos (ou menos, se menos de 5 jogos
tiverem sido jogados; dica: o programa deve se lembrar de quantos jogos já foram jogados). Sobre cada
jogo, o programa deve informar quantas tentativas foram necessárias até adivinhá-lo. Por exemplo:

Histórico:
Jogo 1: 4 tentativas
Jogo 2: 3 tentativas
Jogo 3: 8 tentativas
Jogo 4: 4 tentativas
Jogo 5: 6 tentativas

Após o histórico ser apresentado, o programa deve continuar a repetir o menu inicial.
Limpar histórico


Ao escolher a opção 3 do menu, o programa deve limpar a memória (dica: o programa precisa se lembrar
quantos jogos estão contidos na memória, entre 0 e 5), e imprimir uma mensagem avisando o usuário
que o histórico foi zerado. Após isso feito, o programa deve retornar ao menu inicial.
Sair

Para sair do jogo, basta o usuário escolher a opção 4 no menu. O programa deve ser encerrado (ou seja,
o loop do menu inicial deve ser terminado), e não é necessário a impressão de qualquer mensagem.
