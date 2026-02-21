
Si a[0] = 1000 entonces a[10] = 1010;

/*
 1.Formula
  &a[i] = base + i * sizeof(tipo_de_dato)

  si a[0] = 1000
  entonces: base = 1000
  por lo que:
  &a[10] = 1000 + 10 * sizeof(tipo_de_dato)
  
  si:
  a[10] = 1010 
  entonces:
  1010 = 1000 + 10 * sizeof(tipo_de_dato)
  10 = 10 * sizeof(tipo_de_dato)
  sizeof(tipo_de_dato) = 1

  Por lo tanto, puedo decir que esta afirmacion seria correcta si o solo si
  el tamaño del tipo fuera de 1 byte
   sizeof(char) = 1 byte
*/
