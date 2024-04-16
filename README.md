# PUSH_SWAP

## Elegir el método de ordenación

* 2 valores -> solo hace falta hacer un swap
* 3 valores -> algoritmo de ordenación de tres números
* Más de 3 valores -> algoritmo de ordenació para más de tres valores

### Algoritmo para 3 números
Para 3 valores, solo hay seis posibles casos:
<pre>
  Caso      Acciones
  1 2 3  -> ninguna acción
  1 3 2  -> rra   2 1 3    -> sa   1 2 3    -> 2 acciones
  2 1 3  -> sa    1 2 3    -> 1 acción
  2 3 1  -> rra   1 2 3    -> 1 acción
  3 1 2  -> ra    1 2 3    -> 1 acción
  3 2 1  -> ra    2 1 3    -> sa   1 2 3    -> 2 acciones
</pre>

De aquí podemos sacar un algoritmo simple:
* Si el índice del primer número es el mayor, hace *ra*
* Si el índice del segundo número es el mayor, hace *rra*
* Si el índice del primer número es mayor que el índice del segundo se ha *sa*

### Algoritmo para más de 3 números
1. Haz *pb* a todos los elementos excepto tres
2. Ordena los tres números que quedan en el stack A
3. Haz un bucle mientras haya elementos en B
3.1. Encuentra la posición actual de cada elemento en la pila A y B
3.2. Calcula la posición objetivo en la pila A en la que debería estar cada elemento de B
3.3. Calcula el número de acciones (el coste) para colocar cada elemento de la pila B en su posición objetivo en
       la pila A y elige el elemento más barato de mover
3.4. Ejecuta la secuencia de acciones necesarias para mover el elemento de la pila B a la pila A
4. Si la pila no está ordenada, elige entre *ra* y *rra* para girarlas en orden ascendente
