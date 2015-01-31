#include <stdio.h>

void swap(int *list, int i, int j) {
  //printf("bef\n");
  int tmp = list[i];
  list[i] = list[j];
  list[j] = tmp;
  //printf("aff\n");
}

void mergeSort(int *list, int left, int right){
  int len = right - left + 1;
  if (len <= 1)
    return;

  int mid = len/2+left;
  mergeSort(list, left, mid-1);
  mergeSort(list, mid, right);

  int i = left, j = mid;
  //printf("bef loop lef%d mid%d rig%d\n", left, mid, right);
  while (j-left < len) {
    //printf("here list[%d]%d list[%d]%d\n", i, list[i], j, list[j]);
    if (i <= mid && j <= right) {
      if (list[i] > list[j]) {
	//printf("swap list[%d]%d list[%d]%d\n", i, list[i], j, list[j]);
	swap(list, i, j);
	j++;
      } else {
	i++;
      }
    } else if (i < mid) {
      i++;
    } else if (j <= right) {
      j++;
    }
    //printf("list len%d left%d right%d mid%d i%d j%d\n", len, left, right, mid, i, j);
  }
  for (i = 0; i < 8; i++) {
    printf("%d ", list[i]);
  }
  printf("\n");
}


void main() {
  int list[7] = {6,4,5,8,1,3,2};
  
  mergeSort(&list[0], 0, 6);
  int i;
  for (i = 0; i < 7; i++) {
    printf("%d ", list[i]);
  }
  printf("\n");
}
