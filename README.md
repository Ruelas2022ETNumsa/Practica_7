# Practica # 7
## $$\text{INSTRUCCIONES REPETITIVAS}$$

---

1. Realizar un programa para calcular el número combinatorio
$$\dbinom{n}{k} = \dfrac{n!}{k!(n-k)!}$$


Para los números n y r leídos desde teclado, debe tomar en cuenta que deben
ser números enteros positivos, además que n > r .
Debe mostrar el diagrama de flujo en PSeInt, el código realizado en Dev-C++
y una captura de la ejecución del programa.


### $$\mbox{Resolviendo}$$
#### Diagramas de flujo


>${\color{TealBlue}\mbox{Flujograma  (Programa principal)}}$
>- Inicia con un determinado enunciado, el cual aclarara las condiciones de uso del programa, tambien se le pide al usuario que ingrese 2 valores para que el programa funcione.
>- Antes de guardar los datos ingresados, estos seran evaluados por el subprograma (N_enteros), el cual solo aceptara nros enteros.
>- La condicional if{}else{}, si fuera el caso de operar la tarea de "else" entonces el programa mostrata un texto aclarando que se ingresaron datos erroneos y terminara el programa.
>- La condicional if{}else{}, cuando el usuario ingresa valores validos el programa realizara las tareas necesarias para resolver el problema planteado.
><p align="center">
>  <img  src="https://i.postimg.cc/0QT7qwk4/P7-E1-Dprincipal.png">
></p>


> ${\color{TealBlue}\mbox{Flujograma  (Enunciado)}}$
> - Muestra lo que el programa esta tratando de hacer.
> - ${\color{Orange}\mbox{Aclara que datos seran aceptados por el programa.}}$
> - Pide al usuario los valores que se necesitan.
><p align="center">
>  <img  src="https://i.postimg.cc/cJ5QXzV0/P7-E1-Denunciado.png">
></p>


> ${\color{TealBlue}\mbox{Flujograma  (Numeros entero)}}$
> - Analiza en numero ingresado por el usuario, si este nro es entero el subprograma devolvera este valor para luego ser guardado en una determinada variable y sino fuera el caso se guarda el valor de 0; esto se logra gracias a la implementacion de operaciones que evaluan el resto del numero.
> - Al ingresar el numero, este es de tipo flotante y debera ser convertido a un de tipo entero.
> - Al nuevo nro de tipo entero ya se le puede calcular su resto entre 1000.
> - Finalmente el resto es evaluado, si cumple la condicion se devolvera el numero para ser guardado y sino fuera el caso se retornara un valor de 0.
><p align="center">
>  <img  src="https://i.postimg.cc/vBg5jzs9/P7-E1-Dentero.png">
></p>


> ${\color{TealBlue}\mbox{Flujograma  (Factorial)}}$
> - Realiza las operaciones necesarias para resolver un factorial.
> - Mediante una condicional if{}else{} se realiza la tarea de entregar el factorial  de 0 o el factorial de un nro entero positivo.
> - Esto se logra con un ciclo for(){} que tiene a la variable "i" como contador, y a la variable "f" como acumulador.
><p align="center">
>  <img  src="https://i.postimg.cc/g00Vyptg/P7-E1-Dfun ciclo for(){}actorial.png">
></p>

---

2. Realizar un programa imprimir los números impares menores o iguales a n
leído desde teclado, además obtener su suma, debe realizarse mediate la
estructura for. Debe mostrar el diagrama de flujo en PSeInt, el código realizado
en Dev-C++ y una captura de la ejecución del programa.

### $$\mbox{Resolviendo}$$
#### Diagramas de flujo



> ${\color{TealBlue}\mbox{Flujograma  (Porgrama principal)}}$
> - 
><p align="center">
>  <img  width="700" height="1200" src="https://i.postimg.cc/Z5Qnz8Hx/P7-E2-Dprincipal.png">
></p>










3. La constante de Euler-Mascheroni, está dada por:

$$\gamma = - \int_{0}^{\infty} e^{-x} \text{ ln}(x)\text{ dx }= 0.5772156649 \cdots$$

Que de manera alternativa se puede calcular según:
$$\gamma = \lim_{n\to\infty} \bigg[ \sum_{i=1}^{n} \dfrac{1}{i} - \text{ ln }(n) \bigg]$$

Realizar un programa para obtener esta constante con 6 decimales de precisión,
se puede usar la librería math.h. Debe mostrar el diagrama de flujo en PSeInt,
el código realizado en Dev-C++ y una captura de la ejecución del programa.



