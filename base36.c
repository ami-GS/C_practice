#include <stdio.h>
#include <math.h>

unsigned int base36(char *s) {
  unsigned int ans = 0;
  
  int len = 0;
  while (s[++len] != '\0'){}

  char srev[len+1];
  for (int i = 0; i < len; i++) {
    srev[i] = s[len-i-1];
  }
  srev[len] = '\0';

  for (int i = 0; i < len; i++) {
    if ('0' <= srev[i] && srev[i] <= '9') {
      ans += (srev[i] - '0')*pow(36.0, (double)i);
    } else if ('a' <= srev[i] && srev[i] <= 'z') {
      ans += (srev[i] - 'a' + 10)*pow(36.0, (double)i);
    }
  }

  return ans;
}

void main() {
  char *s = "1z";
  unsigned int ans = base36(s);
  printf("%d\n", ans);
}
