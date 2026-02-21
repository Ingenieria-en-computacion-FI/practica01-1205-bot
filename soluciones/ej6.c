#include <stdio.h>

int main() {
    int m[2][4];

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 4; j++) {
            printf("&m[%d][%d] = %p\n",i ,j, &m[i][j]);
        }
    }
    return 0;
}

/*
 1. Imprime direcciones de todos los elementos.
  Si, al compilarlo en terminal imprime todos los elementos.
  
 2. Determina si almacenamiento es por filas o columnas.
 Despues de m[0][3] sigue m[1][0]
  Es decir:
  C almacena matrices en memoria por filas (raw-major-order)
  
 3. Deduce fórmula de dirección de m[i][j].
  -Cada fila tiene 4 columnas
  -sizeof(int) = 4 bytes
  &m[i][j] = &m[0][0] tiene que empezar desde su primer elemento
  &m[i][j] = &m[0][0] + (i * 4 +j) para indicar su posicion se le multiplica por
  el numero de filas a i y se le suma j 
  &m[i][j] = &m[0][0] + (i * 4 +j) * sizeof(int) se le tiene que multiplicar por los
  bytes a i para indicar en que celda se encuentra y luego sumarle j para
  asignarle una celda a cada elemento
  

*/
