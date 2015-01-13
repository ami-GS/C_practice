#include <stdio.h>
#include <math.h>

const char ZERO = '0';

int myAtoI(char* s) {
  int i = 0;
  int num[BUFSIZ];

  for (; s[i] != '\0'; i++) {
    num[i] = s[i] - ZERO;
  }

  int ans = 0;
  for (int j = 0; j < i; j++) {
    ans += num[j] * pow(10.0, (double)(i-j-1));
  }
  return ans;
}

void main() {
  int num;
  num = myAtoI("12345");

  printf("%d\n", num);
}
