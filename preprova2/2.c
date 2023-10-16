/* Uma pesquisa está sendo realizada para saber o perfil das pessoas que
participam de shows de música.  Para isso algumas perguntas são realizadas para
possibilitar a geração de algumas informações. O programa será utilizado por um
entrevistador que irá até a frente da casa de shows ou do estádio onde está
ocorrendo o evento e irá entrevistar as pessoas que estão na fila aguardando a
entrada. Não se sabe quantos serão as pessoas entrevistadas (a quantidade de
pessoas), por isso, utilize a estratégia de informar ZERO na idade da pessoa
para finalizar a coleta de dados da pesquisa e daí possibilitar gerar e mostrar
os dados das saídas esperadas. Portanto, no final da entrevista deseja-se saber
a quantidade de pessoas entrevistadas, a média das idades das pessoas
entrevistadas que estão indo a primeira vez em um show (isto é, nas perguntas o
pesquisador deve perguntar se é o primeiro show que a pessoa está indo ou não).
A pesquisa também deseja saber qual o tipo de música que os entrevistados mais
gostam(informe o tipo de música mais votado naquele grupo de entrevistados). Use
para as músicas a seguinte legenda: 1 - pop, 2- rock, 3 - pagode e 4 -
sertanejo. Cada entrevistado deve responder apenas 1 tipo de música.

Faz parte da avaliação a identificação dos dados de entrada necessários para o
desenvolvimento do programa e as validações necessárias para os dados de
entrada.

Faça a consitência de dados de entrada, tais como a idade, o tipo de música,
etc.

 informar as saídas, como no exemplo:

****************

Quantidade de pessoas entrevistadas

*****************

média das idades das pessoas entrevistadas que estão indo a primeira vez em um
show

*****************

qual o tipo de música que os entrevistados mais gostam

**************** */
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
  int somaIdade;
  int qtdPop, qtdRock, qtdPagode, qtdSertanejo;
  float somaIdadesPrimeiroShow;
  int qtdPessoas = 0;
  int qtdPessoasPrimeiroShow = 0;

  int idade = 0;

  int continuar = 1;
  while (idade != 0) {
    // pergunta a idade da pessoa até ter um valor válido.
    do {
      printf("Digite a idade da pessoa em anos: \n");
      scanf("%d", &idade);
    } while (idade < 0);

    int primeiroShow;
    do {
      printf("Essa eh a primeira vez dessa pessoa em um show? 1 para sim, 0 para nao. \n");
      scanf("%d", &primeiroShow);
    } while (!(primeiroShow == 0 || primeiroShow == 1));

    if (primeiroShow == 1) {
      qtdPessoasPrimeiroShow++;
      somaIdadesPrimeiroShow += idade;
    }

    int escolhaFavorito = 0;
    while (!(escolhaFavorito >= 1 && escolhaFavorito <= 5)) {
      printf("Qual o estilo musical que a pessoa mais gosta? \n");
      printf("1-Pop \n2-Rock \n3-Pagode \n4-Sertanejo \n");
      scanf("%d", &escolhaFavorito);
    }
    switch (escolhaFavorito) {
    case 1:
      qtdPop++;
      break;
    case 2:
      qtdRock++;
      break;
    case 3:
      qtdPagode++;
      break;
    case 4:
      qtdSertanejo++;
      break;
    }
    
    qtdPessoas++;
  }

  printf("\nQuantidade de pessoas entrevistadas: \n %d", qtdPessoas);
  printf("\nMedia das idades das pessoas entrevistadas que estao indo a "
         "primeira vez no show. \n %f",
         somaIdadesPrimeiroShow / qtdPessoasPrimeiroShow);
  // tipo de musica que os entrevistados mais gostaram:
  if (qtdPop > qtdRock) {
    //pop > rock
    if (qtdPop > qtdPagode) {
      // pop > rock, pagode
      if (qtdPop > qtdSertanejo) {
        printf("O pop é o estilo musical mais amado! \n");
      } else {
        printf("Sertanejo eh o estilo musical mais amado! \n");
      }
    } else {
      // qtdPagode > qtdPop > qtdRock
      if (qtdPagode > qtdSertanejo) {
        printf("O pagode eh o estilo musical mais amado! \n");
      } else {
        // qtdSertanejo é o maior
        printf("O sertanejo eh o estilo musical mais amado! \n");
      }
    }
  } else {
    // rock > pop
    if (qtdRock > qtdPagode) {
      // rock > pagode, pop
      if (qtdRock > qtdSertanejo) {
        printf("O rock eh o estilo musical mais amado! \n");
      } else {
        printf("O sertanejo eh o estilo musical mais amado! \n");
      }
    } else {
      // pagode > rock > pop
      if (qtdPagode > qtdSertanejo) {
        printf("O pagode eh o estilo musical mais amado! \n");
      } else {
        printf("O sertanejo eh o estilo musical mais amado! \n");
      }
    }
  }
}