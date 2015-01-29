#include <stdio.h>


void quickSort(int *list, int start, int end){
  int i = start, j = end;
  int pivot = list[(start + end) / 2];
  while(1) {
    while (list[i] < pivot)
      i++;
    while (list[j] > pivot)
      j--;
    if (i >= j)
      break;

    int tmp = list[i];
    list[i] = list[j];
    list[j] = tmp;

    i++;
    j--;
  }

  if (start < i - 1)
    quickSort(list, start, i - 1);
  if (end > j + 1)
    quickSort(list, j + 1, end);

}

void main(){
  int list[24] = {2, 5, 2, 100, 49, 10, 15, 1, 4, 0 ,7, 1,1,1,2, 11, 50, 32, 56,12, 3, 33, 42};
  int LEN = 24;
  int i = 0;
  for (; i < LEN; i++)
    printf("%d ", list[i]);
  printf("\n");

  quickSort(&list[0], 0, LEN - 1);

  for (i = 0; i < LEN; i++)
    printf("%d ", list[i]);
  printf("\n");
}
