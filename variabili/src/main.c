#include <stdio.h>

int main() {
  float a = 3.57; // Dichiariamo variabile di tipo Float (virgola mobile) e assegnamo 3.57
  double b; // Dichiariamo un Double (che è double > float)
  char var[13] = "ciao fratmo!";

  b = a; // e assegnamo il valore di a (3.57), copiandolo
  printf("%lf \n", b); // stampiamo la variabile b
  // %lf è un placeholder per stampare valori DOUBLE
  printf("%s", var);
  // %c è un placeholder per stampare valori CHAR

  return 0;
}

/*
    ============================
    PLACEHOLDER DI printf IN C
    ============================

    -- Tipi base --
    %d / %i   → intero con segno (base 10)
    %u        → intero senza segno
    %f        → float/double in formato decimale
    %lf       → double (equivalente a %f in printf)
    %c        → carattere singolo
    %s        → stringa terminata da '\0'
    %p        → indirizzo di memoria (puntatore)

    -- Varianti interi --
    %o        → intero senza segno in ottale
    %x        → esadecimale minuscolo
    %X        → esadecimale maiuscolo
    %ld       → long
    %lld      → long long
    %zu       → size_t

    -- Varianti floating point --
    %e / %E   → notazione scientifica
    %g / %G   → sceglie automaticamente tra %f e %e
    %a / %A   → floating point in esadecimale

    -- Modificatori --
    %10d      → larghezza minima 10 caratteri
    %-10d     → allineamento a sinistra
    %.2f      → due cifre decimali
    %05d      → padding con zeri
    %+d       → mostra sempre il segno

    -- Nota importante --
    Il numero di placeholder deve corrispondere al numero di argomenti.
    Mismatch → comportamento indefinito.
*/