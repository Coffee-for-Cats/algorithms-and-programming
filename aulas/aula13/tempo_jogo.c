#include <stdio.h>

void tempoDeJogo(int horaComeco, int minComeco, int horaFim, int minFim) {
  if (horaComeco > 24 || horaComeco < 0) {
    printf("Valor invalido de hora de comeco!\n");
    return;
  }
  if (minComeco > 59 || minComeco < 0) {
    printf("Valor invalido de minuto de comeco!\n");
    return;
  }
  if (horaFim > 24 || horaFim < 0) {
    printf("Valor de hora de termino invalido!\n");
    return;
  }
  if (minFim > 59 || minFim < 0) {
    printf("Valor de minuto de fim invalido!\n");
    return;
  }
  
  if (minComeco > minFim) {
    // ex: se o jogo terminar no min 20, e comecou no min 30, vai faltar 10 min na conta.
    horaComeco--;
    minComeco += 60;
  }
  int tempoMin = minFim - minComeco;

  int tempoHora = horaFim - horaComeco;
  // caso o jogo comece em um dia e termine no outro.
  if (tempoHora < 0) {
    tempoHora += 24;
  }

  printf("Tempo de jogo: %dh %dmin\n", tempoHora, tempoMin);

  // int resultados[2] = { tempoHora, tempoMin };
  // return resultados;
}

int main() {
  int horaInicio;
  printf("Digite o horario de inicio do jogo: \n");
  scanf("%d", &horaInicio);

  int minInicio;
  printf("Digite o minuto de inicio do jogo: \n");
  scanf("%d", &minInicio);

  int horaTermino;
  printf("Digite o horario de termino do jogo: \n");
  scanf("%d", &horaTermino);

  int minTermino;
  printf("Digite o minuto de termino do jogo: \n");
  scanf("%d", &minTermino);

  tempoDeJogo(horaInicio, minInicio, horaTermino, minTermino);

  // int resultado[2] = tempoDeJogo(horaInicio, minInicio, horaTermino, minTermino);
  // printf("O jogo durou: %d horas e %d minutos \n", resultado[0], resultado[1]);
}