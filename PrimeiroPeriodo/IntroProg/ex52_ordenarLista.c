#include <stdio.h>

int main(){

  int n, i=0, j=0, temp;

  scanf("%d", &n);
  int arr[n];

  for(i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }

  for(i=0; i<n-1; i++){
    for(j=0; j<n-1-i; j++){
      if(arr[j] > arr[j+1]){
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }

  for(i=0; i<n; i++){
    printf("%d\n", arr[i]);
  }

  return 0;
}

