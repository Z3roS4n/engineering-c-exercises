#include <stdio.h>

int main() {
  int x, y, z, res = 0;

  printf("SOMMA TRA 3 CIFRE");

  printf("Prima cifra: ");
  scanf("%d", x);
  getchar();

  printf("Seconda cifra: ");
  scanf("%d", y);
  getchar();
  
  printf("Terza cifra: ");
  scanf("%d", z);
  getchar();

  res = x + y + z;

  printf("La somma tra %d, %d e %d è %d", x, y, z, res);
  
  return 0;
}