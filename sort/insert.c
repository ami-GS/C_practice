#include <stdio.h>

void insertSort(int *list, int len) {
  int i;
  int tmp;
  for (i = 1; i < len; i++) {
    tmp = list[i];
    int j = i;
    while (j > 0 && tmp < list[j-1]) {
      list[j] = list[j-1];
      j--;
    }
    list[j] = tmp;
  }
}

void main() {
  int list[10] = {8, 3,1,5,6,2,7,3,4, 9};
  insertSort(&list[0], 10);
  int i;
  for (i = 0; i < 10; i++){
    printf("%d ", list[i]);
  }
  printf("\n");
}
