#include <stdio.h>
#include <math.h>

const char ZERO = '0';

int myAtoI(char* s) {
  int i = 0;
  int len = 0;
  int ans = 0;

  while (s[len++] != '\0') {}
  len--;

  for (; i < len; i++) {
    ans += (s[i] - ZERO) * pow(10, len-1-i);
  }
  return ans;
}

void main() {
  int num;
  num = myAtoI("12345");

  printf("%d\n", num);
}
