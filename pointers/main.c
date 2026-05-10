#include <stdio.h>

int main() {
  int number = 10;
  int* n_point = &number - 10;

  printf("%d", *n_point);
}