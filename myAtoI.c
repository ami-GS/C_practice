#include <stdio.h>

const char ZERO = '0';

char* myAtoI(int num) {
  int revAns[255];
  int i = 0;
  for (; num / 10 != 0; i++) {
    revAns[i] = num % 10 + ZERO;
    num /= 10;
  }
  revAns[i] = num + ZERO;
  //i++;

  static char ans[255];
  int j = 0;
  for (; i != -1; i--) {
    ans[j] = revAns[i];
    j++;
  }
  ans[j] = 0;

  return &ans[0];
}

void main() {
  char *c;
  c = myAtoI(123456789);
  printf("%s\n", c);
}
