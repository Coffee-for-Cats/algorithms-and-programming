/*Um granjeiro deseja organizar as informações sobre a criação de perus e
convidou você para desenvolver um programa que irá realizar algumas
contabilizações. Para cada ave deve-se armazenar as seguintes informações:
código (deve ser usado como índice), data de nascimento (dia e mês), sexo (F
para feminino e M para masculino) e o peso. O  granjeiro irá armazenar até 10
animais. Apresente um menu com as seguintes opções:

1- Cadastramento da ave (observe que o código é sequencial e não se repete e
inicia por zero). Aqui para cada ave a ser cadastrada,  solicite as informações
de data de nascimento, sexo e peso.

2 – Peso médio dos perus da granja (aqui a média poderá ser solicitada, mesmo
antes de haver aves cadastradas, assim como, não existe necessidade de estar
todos as aves cadastradas(10) para realizar a média). Realize as validações
necessárias e informe mensagens adequadas para cada situação.

3- Quantidade de o perus fêmeas (aves do sexo F, observe que aqui a informação
deve ser das aves cadastradas, que pode ser nenhum, alguns ou 10)

4- código da ave ou aves que nasceram em 04/07 (pode não existir nascidos neste
dia, assim como mais de uma ave pode ter nascido no mesmo dia)

5 – Fim

Observe: 1) realize as consistências de entrada necessárias;*/

#define _CRT_SECURE_NO_WARNINGS

#define tam 10
#include <stdio.h>

int main() {
  // informações gerais de cada ave.
  int id_aves[tam];
  int dias_nasc[tam];
  int meses_nasc[tam];
  char sexos_aves[tam];
  float pesos_aves[tam];

  int qtd_aves = 0;

  int opcao = 0;
  while (opcao != 5) {
    printf("Selecione uma opcao: \n");
    printf("1 -> Cadastramento \n");
    printf("2 -> Media dos pesos \n");
    printf("3 -> Quantidade de Perus femeas \n");
    printf("4 -> IDs dos perus nascidos em 04/07 \n");
    printf("5 -> Sair \n");
    scanf("%d", &opcao);

    switch (opcao) {
    // Cadastrameto de aves
    case 1: {
      int dia_nasc = -1;
      int mes_nasc = -1;
      while (mes_nasc < 1 || mes_nasc > 12) {
        printf("Digite o mes de nascimento da ave (1-12): ");
        scanf("%d", &mes_nasc);
      }
      int limite_do_mes = 31;
      // aqui voce pode implementar todos os meses que não tem 31 dias.
      // me nego a fazer aqui.
      while (dia_nasc < 1 || dia_nasc > limite_do_mes) {
        printf("Digite o dia de nascimento da ave (1-31): ");
        scanf("%d", &dia_nasc);
      }
      char sexo = 'x';
      while (!(sexo == 'F' || sexo == 'M')) {
        printf("Digite M para macho e F para Femea: ");
        // esse espaço aparentemente é importante.
        scanf(" %c", &sexo);
      }
      float peso = -1;
      while (peso < 0) {
        printf("Digite o peso da ave: ");
        scanf("%f", &peso);
      }

      // "Salva" todas as informações obtidas.
      id_aves[qtd_aves] = qtd_aves + 1;
      dias_nasc[qtd_aves] = dia_nasc;
      meses_nasc[qtd_aves] = mes_nasc;
      sexos_aves[qtd_aves] = sexo;
      pesos_aves[qtd_aves] = peso;

      qtd_aves++;

      printf("Peru adicionado ao banco de dados!\n");
      // da a mesma quantidade de cliques e reduz 1 variavel.
      printf("Redirecionando para o menu. Caso queira inserir mais uma ave, "
             "use a opcao 1 novamente! \n");
      }
      break;
    // Media do peso
      case 2: {
        if (qtd_aves == 0) {
          printf("Nao ha aves cadastradas para que possamos calcular uma media!");
        } else {
          float soma = 0;
          for (int i = 0; i < qtd_aves; i++) {
            soma += pesos_aves[i];
          }
          float media = soma / (float) qtd_aves;
          printf("A media de peso das aves eh de %.2f \n", media);
        }
      }
      break;
    // Quantidade de perus femeas.
    case 3: {
        int contagem = 0;
        for (int i = 0; i < qtd_aves; i++) {
          if (sexos_aves[i] == 'F') contagem++;
        }
        printf("Existem %d perus femeas salvos! \n", contagem);
      }
      break;
      // ID's das aves que nasceram em 04/07.
      case 4: {
        int explicacao = 0; // 0 = nao expliquei, 1 = expliquei.
        for (int i = 0; i < qtd_aves; i++) {
          if (dias_nasc[i] == 4 && meses_nasc[i] == 7) {
            // gosto de minimizar if's dentro de for's, mas isso é mais rapido do que fazer 3 loops.
            if (explicacao == 0) {
              printf("As aves que nasceram dia 04/07 foram: ");
              explicacao = 1; //tranca para eu não printar novamente a explicao
            }
            printf("%d, ", i + 1);
          }
          printf("\n");
        }
        if (explicacao == 0) printf("Nenhuma ave nasceu em 04/07 \n");
      }
      break;
    case 5:
      printf("Encerando secao!");
      break;
    default:
      printf("Opcao incorreta!\n");
    }
  }
}