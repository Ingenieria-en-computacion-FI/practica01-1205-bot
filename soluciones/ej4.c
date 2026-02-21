&a[0] = 5000 /* base */
&a[3] = 5012

/*
 1.Tamaño del tipo
  &a[i] = base + i * sizeof(tipo_de_dato)
  5012 = 5000 + 3 * sizeof(tipo_de_dato)
  sizeof(tipo_de_dato) = 4 bytes
  
 2.Dirección de a[5]
  &a[i] = base + i * sizeof(tipo_de_dato)
  &a[5] = 5000 + 5 * 4 = 5020
  
 3.Fórmula usada
   &a[i] = base + i * sizeof(tipo_de_dato)

*/ 
