#lo hago junto con los dos anteriores

0-create_array.c = Creo un matriz y le asigno memoria dinamica con malloc.

1-strdup.c =  Copia la cadena str recorriendo el tamaño de la misma y obteniendo asi el tamaño de memoria con el malloc, seguido comparamos las dos cadenas para verificar

2-str_concat.c = Concateno dos cadenas mandadas por parametros en el cual encontramos la longitud de bytes de cada uno y con las mismas usamos malloc para tener el espacio en memoria para al final unir la 1 con la 2.

3-alloc_grid.c =  En simples palabras generamos dos malloc para cada eje y a los dos los recorremos poniendo condicionales como si son nulos y si es el caso que libere el espacio en memoria

4-free_grid.c = Recreamos una parte del ejercicio anterior para liberar memoria del ejercicio 3.