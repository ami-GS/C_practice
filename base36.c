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

void num2base36(char *dist, int num) {
  int i = 0;
  while (num / (int)pow(36.0, i) != 0) {
    i++;
  }

  int tmp;
  for (; i > 0; i--) {
    tmp = num / (int)pow(36.0, i-1);
    if (0 <= tmp && tmp <= 9) {
      *dist = tmp + '0';
    } else if (10 <= tmp && tmp <= 35) {
      *dist = tmp + 'a' - 10;
    }
    dist++;
    num %= (int)pow(36.0, i-1);
  }
  dist = '\0';

}

void main() {
  char *s = "1z";
  unsigned int ans = base36(s);
  printf("%d\n", ans);
  char dist[BUFSIZ];
  int num = 35*(int)pow(36,2) + 10*(int)pow(36,1) + 3;
  num2base36(&dist[0], num);
  printf("%s\n", dist);
}
