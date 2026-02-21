int m[3][5];
base = 4000;

/*
 formula:
    &m[i][j] = base + (i * N + j) * sizeof(tipo_de_dato)
    N = numero de columnas N = j
    int = 4 bytes
    
 1.Dirección de m[2][4]
    &m[2][4] = 4000 + (2 * 5 + 4) * 4
    &m[2][4] = 4056
    
 2.Dirección de m[1][3]
    &m[2][4] = 4000 + (1 * 5 + 3) * 4
    &m[2][4] = 4032

 3.Diferencia entre ambas:
    &m[2][4] - &m[2][4]
    4056 - 4032 = 24
*/ 
