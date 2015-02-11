#include <stdio.h>
#include <math.h>

unsigned int base2(char* str) {
  unsigned int ans = 0;
  int len = 0;
  while (str[len++] != '\0') {}
  len--;

  char revstr[len+1];
  int i = 0;
  for (; i < len; i++) {
    revstr[i] = str[len-1-i];
  }
  revstr[len] = '\0';

  for (i = 0; i < len; i++) {
    ans += (revstr[i] - '0') * pow(2, i);
  }
  return ans;
}

void main() {
  char* str = "10010";

  unsigned int ans = base2(str);

  printf("%s = %d\n", str, ans);

}
