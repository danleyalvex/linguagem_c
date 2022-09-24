// Efetuar a leitura de um número inteiro longo (long) que representa um tempo em segundos e convertê-lo para dias, horas, minutos e segundos.
#include <stdio.h>

int main () {
long tempo;

  printf("Informe o tempo em segundos: ");
  scanf("%ld", &tempo);

  int dia  = tempo / (24 * 60 * 60l); // 60l transforma o nro inteiro em inteiro longo
  int hora = (tempo % (24 * 60 * 60l)) / (60 * 60);
  int min  = ((tempo % (24 * 60 * 60l)) % (60 * 60)) / 60;
  int seg  = ((tempo % (24 * 60 * 60l)) % (60 * 60)) % 60;

  printf("\n%d dias, %d horas, %d minutos e %d segundos.", dia, hora, min, seg);

}