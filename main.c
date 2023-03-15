#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

  char nome[256];
  char sobrenome[256];
  int idade;

  printf("Ola! Qual seu nome?\n");
  scanf("%s",&nome);

  printf("%s Qual seu sobrenome?\n");
  scanf("%s",&sobrenome);

  printf("%s Qual sua idade?\n");
  scanf("%d",&idade);

  printf("Nome: %s\nSobrenome: %s\nIdade: %d\n",nome,sobrenome,idade);

    // Hora de início da sessão
    int start_hour = 18;
    int start_min = 00;
    int start_sec = 0;

    // Obtém a hora atual
    time_t current_time = time(NULL);
    struct tm *local_time = localtime(&current_time);

    // Obtém a hora atual em formato de horas e minutos e segundos
    int current_hour = local_time->tm_hour;
    int current_min = local_time->tm_min;
    int current_sec = local_time->tm_sec;

    // Verifica se você está atrasado para a sessão
    if (current_hour > start_hour) {
        printf("Voce esta atrasado");
    }
    else if (current_hour == start_hour && current_min > start_min) {
        printf("Voce esta atrasado");
    }
    else if (current_hour == start_hour && current_min == start_min && current_sec >= start_sec){
        printf("Voce esta atrasado");
    }
    else {
        printf("Bom filme");
    }
    printf("\nCINEARAUJO SHOPPING PIRACICABA");

    printf("\nGato de Botas: O Ultimo Pedido");

    return 0;
}
