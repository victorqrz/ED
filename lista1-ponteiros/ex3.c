#include <stdio.h>

void vogalFilter(char *letter) {
  int i;
  while(*letter) {
    if(*letter == 'a' || *letter == 'e' || *letter == 'i' || *letter == 'o' || *letter == 'u' || *letter == 'A' || *letter == 'E' || *letter == 'I' || *letter == 'O' || *letter == 'U')
      printf("%c", *letter);
    else {
      printf(" ");
    }
    *(letter++);
  }
}

int main() {
  char *s = "victor";
  vogalFilter(s);

  return 0;
}
