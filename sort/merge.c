#include <stdio.h>

int tmp[10];

void mergeSort(int *list, int left, int right){
  if (left >= right)
    return;
  int l;
  for (l = 0; l < 10; l++) {
    tmp[l] = 0;
  }

  int mid = (left+right)/2;
  mergeSort(list, left, mid);
  mergeSort(list, mid+1, right);

  int i = left, j = mid+1, k = 0;
  while (1) {
    if (i <= mid && j <= right) {
      if (list[i] >= list[j]) {
	tmp[k++] = list[j++];
      } else {
	tmp[k++] = list[i++];
	}
    } else if (i <= mid) {
      tmp[k++] = list[i++];
    } else if (j <= right) {
      tmp[k++] = list[j++];
    } else {
      break;
    }
  }

  for (i = 0; i <= right - left; i++) {
    printf("%d ", tmp[i]);
    list[left + i] = tmp[i];
  }
  printf("\n");
}


void main() {
  int list[7] = {6,4,5,8,1,3,2};
  int i;
  for (i = 0; i < 7; i++) {
    printf("%d ", list[i]);
  }
  printf("\n");
  
  mergeSort(&list[0], 0, 6);
  for (i = 0; i < 7; i++) {
    printf("%d ", list[i]);
  }
  printf("\n");
}
