#include <stdio.h>
#define N 3

int main() {
  int nums[N * 2];
  int res[N];
  int r = 0;

  for(int i = 0; i < 2; i++) {
    printf("Inserisci il numero %d > ", i + 1);
    scanf("%d%d%d", &nums[0 + 3 * i], &nums[1 + 3 * i], &nums[2 + 3 * i]);
  }

  for(int i = 0; i < N; i++) {
    res[i] = (nums[i] + nums[i + 3] + r);
    r = res[i] / 10;
    res[i] = res[i] % 10;
  }

  if(r) printf("%d", r);
  for(int i = 0; i < N; i++) 
    printf("%d", res[i]);
    
  return 0;
}