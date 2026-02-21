&m[0][3]
&m[1][0] 

/*
 1.Sin ejecutar determina cuál dirección es mayor: &m[1][0]
  -Justifica matemáticamente.
   suponinendo que:
   -base = 1000
   -int = 4 bytes
   -N = 4
   
   formula:
   &m[i][j] = base + (i * N + j) * sizeof(int)

   para: 
   &m[0][3] = 1000 + (0 * 4 + 3) * 4
   &m[0][3] = 1012

   para: 
   &m[1][0] = 1000 + (1 * 4 + 0) * 4
   &m[0][3] = 1016

   &m[0][3] > &m[0][3]
*/ 
