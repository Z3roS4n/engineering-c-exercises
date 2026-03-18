#include <stdio.h>

int main() {
  float a = 3.57; // Dichiariamo variabile di tipo Float (virgola mobile) e assegnamo 3.57
  double b; // Dichiariamo un Double (che è double > float)

  b = a; // e assegnamo il valore di a (3.57), copiandolo
  printf("%lf", b); // stampiamo la variabile b
  // %lf è un placeholder per stampare valori DOUBLE

  return 0;
}