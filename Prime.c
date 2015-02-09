#include <stdio.h>
#include <math.h>

int isPrime(int num) {

  if (num <= 1 || num != 2 && num % 2 == 0)
    return -1;

  int i;
  for (i = 3; i < sqrt(num); i += 2) {
    if (num % i == 0)
      return -1;
  }
  return 1;
}

void main() {
  int i;
  for (i = 0; i < 100; i++)
    printf("%d:%d\n", i, isPrime(i));
}
