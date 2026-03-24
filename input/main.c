#include <stdio.h>

int main() {
  char x;
  int y;

  printf("Inserisci il numero da una sola cifra > ");
  scanf("%d", &y);

  x = y%10 + 48; // si sposta di 48 posizioni nella tabella ASCII, cosi da stampare le cifre da 0 a 9 in corrispondenza degli input 0 - 9
  // y%10 prende il resto della divisione di interi tra y e 10, prendendo quindi solo le unità
  
  printf("Il carattere corrispondente e': %c", x);

  return 0;
}