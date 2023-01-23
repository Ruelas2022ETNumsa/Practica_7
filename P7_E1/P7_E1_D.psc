Algoritmo P7_E1_D
	// ** Enunciado y aclaraciones. **
	Enunciado
	// *** Peticion y registro de datos ***
	Escribir '     n = ' Sin Saltar
	Leer num_x
	// **** N es Z^+ ? ****
	Total <- N_entero(num_x) // Guardando valor n
	num_x <- 0
	Escribir '     k = ' Sin Saltar
	Leer num_x
	// **** N es Z^+ ? ****
	Tomados <- N_entero(num_x) // Guardando valor k
	// * Condicional para aceptar solo Z^+ y n>k*
	Si Total>0 & Tomados>=0 & (Total>Tomados) Entonces
		Escribir ' Calculando...'
		dif <- Total-Tomados
		Comb <- Fact(Total)/(Fact(Tomados)*Fact(dif))
		Escribir ' El combinatorio de ',Total,'tomados de ',Tomados,' es :'
		Escribir '             C_',Total,',',Tomados,' = ',Comb
	SiNo
		Escribir ' El valor invalido.'
		Escribir ' Lea correctamente el enunciado.'
		Escribir ' Terminando programa...'
	FinSi
FinAlgoritmo

Funcion Enunciado
	Escribir ' Sea  el numero combinatorio :'
	Escribir '                      C_(n,k) = n! / [ k!*(n-k)! ] '
	Escribir '  Donde : n > 0 , y es un nro. entero.'
	Escribir '          k >= 0 , y es un nro entero. '
	Escribir ' Ingrese los valores de ...'
FinFuncion

Funcion num <- N_entero(num_x)
	Var_aux <- 0
	Var_aux <- num_x*1000
	Resto <- 0
	Resto <- Var_aux%1000
	Si Resto==0 Entonces
		num <- num_x
	SiNo
		num <- -1
	FinSi
FinFuncion

Funcion f <- Fact(num)
	f <- 1
	Si num<>0 Entonces
		Para i<-1 Hasta num Hacer
			f <- f*i
		FinPara
	FinSi
FinFuncion
