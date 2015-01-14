#include <stdio.h>
#include <math.h>


float myAtoF(char* s) {
  int i = 0, j = 0;
  float ans = 0.0;

  while (s[j] != '.'){
    j++;
  }

  for (; s[i] != '.'; i++) {
    j--;
    ans += (s[i] - '0') * pow(10.0, (double)j);
  }

  i++;
  for (; s[i] != '\0'; i++) {
    j++;
    ans += (s[i] - '0') / pow(10.0, (double)j);
  }

  return ans;
}


void main() {
  printf("%f\n", myAtoF("12345.678"));
}
