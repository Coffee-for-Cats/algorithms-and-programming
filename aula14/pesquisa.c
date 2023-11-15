// Uma pesquisa está sendo realizada para saber o perfil das pessoas que participam de shows de música.  Para isso algumas perguntas são realizadas para possibilitar a geração de algumas informações. O programa será utilizado por um entrevistador que irá até a frente da casa de shows ou do estádio onde está ocorrendo o evento e irá entrevistar as pessoas que estão na fila aguardando a entrada. Não se sabe quantos serão as pessoas entrevistadas (a quantidade de pessoas), por isso, utilize a estratégia de informar ZERO na idade da pessoa para finalizar a coleta de dados da pesquisa e daí possibilitar gerar e mostrar os dados das saídas esperadas. Portanto, no final da entrevista deseja-se saber a quantidade de pessoas entrevistadas, a média das idades das pessoas entrevistadas que estão indo a primeira vez em um show (isto é, nas perguntas o pesquisador deve perguntar se é o primeiro show que a pessoa está indo ou não). A pesquisa também deseja saber qual o tipo de música que os entrevistados mais gostam (informe o tipo de música mais votado naquele grupo de entrevistados). Use para as músicas a seguinte legenda: 1 - pop, 2- rock, 3 - pagode e 4 - sertanejo. Cada entrevistado deve responder apenas 1 tipo de música.

// quantidade de pessoas entrevistadas
// a média das idades das pessoas entrevistadas que estão indo a primeira vez em um show
// o tipo de musica que os entrevistados mais gostam.

#include <stdio.h>

int perguntaIdade(int n) {
  int idade;
  do {
    printf("Qual a idade da pessoa %d? ", n + 1);
    scanf("%d", &idade);
  } while (idade < 0);
  return idade;
}

int escolha(char texto[], int limite)
{
  int escolha;
  do {
    printf(texto);
    scanf("%d", &escolha);
  } while (escolha < 0 || escolha > limite);

  return escolha;
}

// sim, eu fiz um loop...
// um monte de if's são extremamente caóticos,
// então ou é isso ou é 4 if's e returns.
int maisAmado(int opcoes[4]) {
  int i, indice_maior = 0;
  for (i = 0; i < 4; i++) {
    if (opcoes[i] > opcoes[indice_maior]) {
      indice_maior = i;
    }
  }
  return indice_maior;
}

int main() {
  int qtd_entrevistados = 0, soma_1vez = 0, qtd_1vez = 0;
  int idade;
  // pop, rock, pagode, sertanejo.
  int musicas[4] = {0, 0, 0, 0};

  idade = perguntaIdade(qtd_entrevistados);
  while(idade > 0) {
    qtd_entrevistados++;
    if ( escolha("Essa eh a primeira vez dela em um show? (1 -> sim, 2 -> nao) ", 2) )
    {
      soma_1vez += idade;
      qtd_1vez++;
    }

    musicas[escolha("Qual tipo de musica que ela mais gosta? (1-pop, 2-rock, 3, pagode, 4-sertanejo)", 4)]++;
    idade = perguntaIdade(qtd_entrevistados);
  }

  printf("Quantidade de pessoas entrevistadas: %d\n", qtd_entrevistados);
  printf("Media das idades das pessoas que estao indo pela primeira vez: %.2f\n", (float) soma_1vez / qtd_1vez);
  printf("O estilo musical mais amado eh: ");
  switch(maisAmado(musicas)) {
    case 1: {
      printf("Pop.");
      break;
    }
    case 2: {
      printf("Rock.");
      break;
    }
    case 3: {
      printf("Pagode.");
      break;
    }
    case 4: {
      printf("Sertanejo.");
      break;
    }
  }
}