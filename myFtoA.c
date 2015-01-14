#include <stdio.h>

void myFtoA(char *dist, float num) {
  int i = 0;
  int numI = (int)num;
  int tmp[BUFSIZ];
  for (; numI / 10 != 0; i++) {
    tmp[i] = numI % 10;
    numI /= 10;
  }
  tmp[i] = numI;

  int j = 0;
  for (; i >= 0; i--) {
    dist[j++] = tmp[i] + '0';
  }
  dist[j++] = '.';

  num -= (int)num;
  for (i = 0; i < 6; i++) {
    num *= 10;
    dist[j++] = (int)num + '0';
    num -= (int)num;
  }
}

void main() {
  char dist[BUFSIZ];

  myFtoA(dist, 1234.567000);
  printf("%s\n", dist);
}
