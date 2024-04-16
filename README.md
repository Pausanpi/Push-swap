### PUSH_SWAP

## Elegir el método de ordenación

* 2 valores -> solo hace falta hacer un swap
* 3 valores -> algoritmo de ordenación de tres números
* >3 valores -> algoritmo de ordenació para más de tres valores

# Algoritmo para 3 números
Para 3 valores, solo hay seis posibles casos:
<pre>
  Caso      Acciones
  1 2 3  -> rra   2 1 3    -> sa   1 2 3    -> 2 acciones
  1 3 2  -> sa    1 2 3    -> 1 acción
  2 1 3
  2 3 1
  3 1 2
  3 2 1
</pre>
