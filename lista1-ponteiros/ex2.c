#include <stdio.h>

int verifyArray(int vet[10]){
  int i, media, total=vet[0], *maior=&vet[0], *menor=&vet[0];

  for(i=1; i<10; i++){
    if(vet[i] > *maior){
      maior = &vet[i];
    }
    if(vet[i] < *menor){
      menor = &vet[i];
    }
    total+=vet[i];
  }

  media = total/10;

  printf("Endereco primeiro elemento: %p | endereco ultimo elemento: %p\n", &vet[0], &vet[9]);
  printf("Maior: %d | Endereco: %p\n", *maior, maior);
  printf("Menor: %d | Endereco: %p\n", *menor, menor);

  return media;
};

int main() {
  int v1[10] = {2, 2, 10, 4, 20, 6, 7, 10, 1, 8};
  int i, *maior, *menor, med;
  maior = &v1[0];
  menor = &v1[0];
  
  med = verifyArray(v1);

  printf("Media: %d\n", med);

  printf("------------------x------------------\n");

  for(i = 0; i < 10; i++) {
    if(v1[i] > med) 
      v1[i] = v1[i] - med;

    if(v1[i] > *maior)
      maior = &v1[i];

    if(v1[i] < *menor)
      menor = &v1[i];
  }
  printf("Endereco do menor valor: %p | %d\n", menor, *menor);
  printf("Endereco do maior valor: %p | %d\n", maior, *maior);

  return 0;
}
