#include <stdio.h>

void arraySort(int *arr, int len);

void shiftElement(int *arr, int *i);

int main() {
  int i, n=0;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);

  int *pvet = calloc(n, sizeof(int));

  for(i=0; i<n; i++) {
    scanf("%d", pvet + i);
  }

  arraySort(pvet, n);

  pvet = pvet + (n-1);

  for(i=0; i<n; i++){
    printf("%d ", *(pvet - i));
  }

  return 0;
}

void arraySort(int *arr, int len) {
  int *i, *last = arr + len, y;
  for(i=arr + 1; i<last; i++)
    if(*i < *(i-1))
      shiftElement(arr, i);
}

void shiftElement(int *arr, int *i) {
  int menorValor;
  for(menorValor = *i; i > arr && *(i-1) > menorValor; i--){
    *i = *(i-1);
  }
  *i = menorValor;
}