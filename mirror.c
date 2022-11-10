#include <stdio.h>
#include <string.h>

void saisie(
  char *pointeur);
int compte(char *s);
char *miroir(char *s);

int main(int argc, char *argv[]) {
  char chaine[20];
  saisie(chaine);
  printf("miroir est %s", miroir(chaine));
}
void saisie(char *cpointeur) {
  printf("saisir \n");
  scanf("%s", cpointeur);
}

char *miroir(char *s)  {
  int i;
  char aux;
  int k;
  k = compte(s) - 1;
  i = 0;
  while (i <= k) {
    aux = s[i];
    s[i] = s[k];
    s[k] = aux;
    k--;
    i++;
  }
  return s;
}

int compte(char *s) {
  char *p;
  int k;
  p = s;
  k = 0;
  while (*p != '\0') {
    p++;
    k++;
  }
  return k;
}
