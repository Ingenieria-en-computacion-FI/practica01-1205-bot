#include <stdio.h>

int main() {
    int a[3], b[3], c[3];

    for(int i = 0; i < 3; i++) {
        printf("&a[%d] = %p\n",i, &a[i]);
    }

    for(int j = 0; j < 3; j++) {
        printf("&b[%d] = %p\n",j, &b[j]);
    }

    for(int k = 0; k < 3; k++) {
        printf("&c[%d] = %p\n",k, &c[k]);
    }
    return 0;
}

/*
 1. Imprime todas las direcciones.
  Al momento de compilarlo y correrlo imprime todas las direcciones :)
  
 2. ¿Están juntos en memoria?
 Si, los elementos de a estan contiguos junto a los de b y c, esto debido a que los arreglos en C siempre 
 ocupan memoria contigua.
 
 3. ¿De qué depende?
 -Compilador
 -Los bits
 -Si son variables locales(stack) o globales
*/
