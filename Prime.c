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

void primeList(int *list) {
  list[0] = -1;
  list[1] = -1;
  int i = 0, j;
  while (list[i++] != '\0') {}
  int len = i-1;

  for (i = 2; i < len; i++) {
    for (j = i*2; j < len; j += i) {
      list[j] = -1;
    }
  }
}

void main() {
  int i;
  for (i = 0; i < 100; i++)
    printf("%d:%d\n", i, isPrime(i));

  int list[100];
  for (i = 0; i < 100; i++) {
    list[i] = 1;
  }

  primeList(&list[0]);
  for (i = 0; i < 100; i++) {
    if (list[i] == 1) {
      printf("%d ", i);
    }
  }
  printf("\n");

}
