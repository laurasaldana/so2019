INTEGRANTES:
Mariagne Lombana
Jhonatan Trujillo
Laura Saldaña

En el primer punto ingresamos al superusuario de root, 
para eliminar la manera aleatoria en la que se otorga el espacio de memoria 
a cada progreso y ejecutamos el comando 
"echo > 0 /proc/sys/kernel/randomize_va_space" con el fin de que al ejecutar 
el programa "mem" dos veces al mismo tiempo, la direccion de memoria de los 
dos programas sea igual.

En el segundo punto de la tarea agregamos el archivo "mycommon.h" que incluye
las funciones para crear, abrir, cerrar y destruir una puerta que va a ser
la que controle el modo en el que se corre el programa de threads.c, para que
los dos hilos que se crean, corran, y cuando uno de ellos este agregando un 
valor al counter, la puerta se cierra y obliga al otro hilo a esperar, despues
vuelve a abrir la puerta para que el segundo hilo pueda usar la variable 
counter, ya modificada. De esta manera no se pierde ningun dato y se pueden 
hacer procesos grandes sin que se pierda informacion en el camino.

Por ultimo, se modifico el archivo io.c de modo que se pudiera leer 
el archivo texto.txt y al compilar y ejecutar el programa io.c, este
imprimiera el texto del archivo texto.txt al reves. Dentro del archivo io.c
se creo una nueva variable llamada "cursor" que al principio se ubica segun
el numero de caracteres que obtiene al leer el archivo texto.txt, despues 
se ubica el cursor en esa posicion, y va retrocediendo leyendo e imprimiendo
las letras que estan en cada posicion, haciendo que se lea la ultima letra 
como la primera y asi sucesivamente.

