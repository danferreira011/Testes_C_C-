#include <stdio.h>

void troca(int a, int b) {
 int temp = a;
 a = b;
 b = temp;
}
int main() {
 int x = 10, y = 20;
 troca(x, y); 
 printf("x=%d, y=%d\n", x, y); //não faz a troca por não foi passada a referencia por ponteiros
 return 0;
}