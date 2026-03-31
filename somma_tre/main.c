#include <stdio.h>

int main() {
  int x, y, z, a, b, c, r;

  printf("Inserisci primo numero: \n");
  scanf("%d%d%d", &x, &y, &z);

  printf("Inserisci secondo numero: \n");
  scanf("%d%d%d", &a, &b, &c);

  int res1 = (z + c);
  if(res1 > 9) {
    res1 = res1 % 10;
    r = 1;
  }

  int res2 = (y + b + r);
  r = 0;
  if(res2> 9) {
    res2 = res2 % 10;
    r = 1;
  }

  int res3 = (x + a + r);
  r = 0;
  if(res3 > 9) {
    res3 = res3 % 10;
    r = 1;
  }

  printf("%d%d%d%d", r, res3, res2, res1);
  return 0;
}