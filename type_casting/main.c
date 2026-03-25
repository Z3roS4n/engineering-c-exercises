#include <stdio.h>

int main() {
  // Type Casting FLOAT -> INT

  float input = 0;
  scanf("%f", &input);

  int casted = (int)(input + 0.5);

  printf("%d", casted);

  return 0;
}