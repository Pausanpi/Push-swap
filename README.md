### PUSH_SWAP

## Elegir el método de ordenación

* 2 valores -> solo hace falta hacer un swap
* 3 valores -> algoritmo de ordenación de tres números
* Más de 3 valores -> algoritmo de ordenació para más de tres valores

# Algoritmo para 3 números
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
