/*
 1.Cuál dirección es mayor:
   &a[4] o &a[5]

formula: 
  &a[i] = base + i * sizeof(tipo_de_dato)
      base = B
      sizeof(tipo_de_dato) = d

&a[4] = B + 4 * d
&a[5] = B + 5 * d

Comparacion: 
      (B + 5 * d) - (B + 4 * d)
      
como el resultado debe ser postivo puedo afirmar que:
&a[5] > &a[4]
*/
