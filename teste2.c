#include <stdio.h>

void troca(int *a, int *b) {
 int temp = *a;
 *a = *b;
 *b = temp; // os * pedem por um ponteiro
}
int main() {
 int x = 10, y = 20;
 troca(&x, &y); //aqui estou chamando a referencia (ponteiro)
 printf("x=%d, y=%d\n", x, y); //aqui a troca acontece pois foi chamada a referencia
 return 0;
}