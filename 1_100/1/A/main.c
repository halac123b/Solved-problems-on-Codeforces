#include <stdio.h>
#include <math.h>

int main(){
  long width, height, flagStone;

  scanf("%ld %ld %ld", &width, &height, &flagStone);
  printf("%llu", (unsigned long long)ceil((float)width / flagStone) * (unsigned long long)ceil((float)height / flagStone));

  return 0;
}