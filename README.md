# Push_swap

[Tutorial](https://youtu.be/wRvipSG4Mmk)

## 💠 Parte obligatoria:
1. Tenemos a nuestra disposición dos pilas llamadas 'a' y 'b'
2. Crear un programa que tome como parámetros un conjunto aleatorio de números (negativos o positivos), sin duplicados. Nuestro programa tiene que manejar ambos tipos de entradas: como número variable de argumentos de línea de comandos; una cadena, es decir, números entre comillas separados por un espacio
3. Implementar un algoritmo que ordene de forma ascendente la entrada de aleatoria de números
4. Nuestro algoritmo consistirá en operacionse swap, rotate, reverse rotate y push
5. Después de tomar una entrada de números y pasarlos a través de nuestros algoritmos de ordenación, nuestro programa mostrará la lista de operaciones (instrucciones)

## 💠 Pseudo código

```
//Declara punteros a dos estructuras de datos/listas enlazadas, una para la pila `a` y otra para `b
  //Poner ambos punteros a NULL para evitar comportamientos indefinidos e indicar que empezamos con pilas vacías

//Maneja los errores de conteo de entrada. El número de argumentos debe ser 2 o más, y la segunda entrada no debe estar vacía
  //Si hay errores de entrada, devuelve error

//Maneja ambos casos de entrada, ya sea un número variable de argumentos de línea de comandos, o como una cadena
	//Si la entrada de números es una cadena, llama a split() para dividir las subcadenas

//Inicializa la pila `a` añadiendo cada número de entrada como un nodo a la pila `a`.
	//Maneja el desbordamiento de enteros, duplicados, y errores de sintaxis, por ejemplo, la entrada sólo debe contener dígitos, o signos `-` `+`
		//Si se encuentran errores, libera la pila `a` y devuelve error
	//Comprueba para cada entrada, si es un entero largo
		//Si la entrada es una cadena, convertirla en un entero largo 
	//Agrega los nodos a la pila `a`

//Comprueba si la pila `a` está ordenada
	//Si no está ordenada, implementa nuestro algoritmo de ordenación 
		//Comprueba si hay 2 números
			//Si es así, simplemente intercambia los números
		//Comprobar si hay 3 números
			//Si es así, implementa nuestro sencillo algoritmo `sort three
		//Comprueba si la pila tiene más de 3 números
			//Si es así, implanta el algoritmo Turk

//Limpia la pila
```

## 💠 Checker que ofrece 42
1. Descargue el archivo correcto de la página del tema
2. Ejecutar el comprobador probablemente no funcionará, ya que no  tendrá el permiso del ejecutable. Compruébalo escribiendo en la terminal `ls -l`
3. Para darle permiso, haz `chmod +x <nombredelarchivo>`
4. Prueba tu ejecutable con todo lo que necesitamos que haga nuestro push_swap
  - por ejemplo, las salidas correctas para todos los tipos de error
  - por ejemplo, ejecute `ARG="4 10 1 3 2'; ./push_swap $ARG | ./checker_Mac $ARG`
  - Para ver cuántas instrucciones realiza, ejecute `ARG="4 10 1 3 2"; ./push_swap $ARG | wc -l`
  - Para que nuestro programa pase la evaluación tendrá que devolver `n` tamaño de instrucciones para ordenar `x` números de valores:
    - Si x = 3 entonces n <= 3
    - Si x = 5 entonces n <= 12
    - Si x = 100 entonces < 1500
    - Si x = 500 entondes < 11500
    - Nota: cuantas menos instrucciones devuelva nuestro algoritmo más puntos de evaluación obtendremos
