#include <stdio.h>
int main(){
    int a[5];
    printf("%p\n", (void*)&a[-1]);
    printf("%p\n", (void*)&a[5]);
    return 0;
}

/*
 1.Por qué compila
  El compilador traduce &a[i] como a + i, sin verificar si i está dentro de los límites del arreglo, porque un areglo solo
  puede tener elementos en el indice positivos y enteros. Como lo traduce como una direccion entoces ahi si puede
  ser que i sea negativo, por eso compila.
  
 2.Por qué es peligroso
 -Leer o corromper variables vecinas en el stack o main
 -Pisar la dirección de retorno de la función
 -Causar un segfault si la página no tiene permisos
 
 3.¿Qué revela sobre memoria
Lo que revela es que en C un arreglo no es una estructura especial del lenguaje,
sino simplemente una dirección de memoria. Cuando escribes a[i],
el compilador lo traduce literalmente a *(a + i), es decir, "ve a la dirección base y súmale i posiciones".
Como i es solo un número entero,
nada impide que sea negativo: a[-1] se convierte en *(a - 1), que apunta a la posición anterior en memoria.

*/
