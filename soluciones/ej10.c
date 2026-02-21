#include <stdio.h>

int gigante[10000000];

int main() {

    /* 
    El arreglo no puede ponerse en la parte del main porque seria
    una declaracion local y como el arreglo es muy grande debe declararse a fuera 
    osea tienes que declararla como una funcion global 
    las variables globales se almacenan en BSS/DATA, para 
    el Stack o pila debe ir en el main porque seria una variable 
    local y aqui podria ir si fuera mas pequeña 
    
    */

}
