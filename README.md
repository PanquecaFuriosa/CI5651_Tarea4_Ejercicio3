Ejercicio #3 de la tarea #4 de la materia CI5651-Diseño de algoritmos I.

Enunciado:
Se desea que implemente, en el lenguaje de su elección, un cliente para probar el proceso de inicialización virtual de arreglos. Su programa debe cumplir con las siguientes características:
• Al invocarse, debe recibir como argumento del sistema el tamaño del arreglo a utilizar.
• El arreglo será indexado a cero (las posiciones válidas, para un arreglo de tamaño n, serán desde la 0 hasta la n − 1).
• Debe presentar al usuario un cliente con cuatro opciones:
  – ASIGNAR POS VAL, que tiene el efecto de asignar el valor VAL en la posición POS del arreglo. Su programa debe reportar un error si la posición POS no es una posición válida del arreglo.
  – CONSULTAR POS, que debe reportar si la posición POS está inicializada o no. En caso de estar inicializada, debe devolver el valor asociado a esa posición. Su programa debe reportar un error si la posición POS no es una posición válida del arreglo.
  – LIMPIAR, que tiene el efecto de limpiar la tabla y hacer que todas las posiciones queden sin inicializar.
  – SALIR, que sale del programa.
• Todas las operaciones involucradas en su programa deben tomar tiempo Θ(1).
• Debe implementar estas operaciones siguiendo el proceso de inicialización virtual visto
en clase, usando los dos arreglos auxiliares, no con métodos alternativos

Para usar el programa debe compilar el código .cpp, debe tener instalado el compilador g++ para c++.

Luego, al ejecutar, solo colocar de parámetro, el tamaño del arreglo virtual.

Ejemplo:

> g++ -o arreglovirtual ArregloVirtual.cpp

> ./arreglovirtual 5

Esto le permitirá ejecutar el programa con un arreglo de tamaño 5 (posiciones del 0 al 4).
