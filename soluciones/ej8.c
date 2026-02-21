base = 2000
sizeof(int)=4
m[1][2] = 2024

/*
 1.Número de columnas
 &m[1][2] = 2000 + (i * N + j) * sizeof(int)
  &m[1][2] = 2000 + (1 * N + 2) *4
  (2024 - 2000) / 4 = N + 2
  N = 6 - 2
  N = 4
  
 2.Tamaño total
 Fila = 0 y 1, osea 2 filas
 Columnas = 4
Entonces:
2 * 4 = 8
8 * sizeof(int)
8 * 4 = 32 bytes
*/ 
