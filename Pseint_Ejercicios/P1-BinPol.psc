Algoritmo BinPol
	Escribir 'Bienvenido al programa, este calculara el módulo y ángulo de un complejo (A+J)'
	Escribir 'Introduzca A (Real)'
	Leer Reals
	Escribir 'Introduzca J (Imaginario)'
	Leer Imags
	// Calcular Modulo
	raiz_cuadrada <- RAIZ((Reals^2+Imags^2))
	// Encontrar en que cuadrante se encuentra
	Si Reals=0 O Imags=0 Entonces
		Si Reals=0 Entonces
			ang_cuadrante <- 90
		SiNo
			ang_cuadrante <- 0
		FinSi
	SiNo
		arctanr <- atan(Imags/Reals)
		ang <- arctanr*(180/PI)
		Si Reals<0 Y Imags>0 Entonces
			ang_cuadrante <- ang+180
		SiNo
			Si Reals<0 Y Imags<0 Entonces
				ang_cuadrante <- ang-180
			SiNo
				ang_cuadrante <- ang
			FinSi
		FinSi
	FinSi
	Escribir 'Valor del ángulo: ',ang_cuadrante
	Escribir 'Valor del módulo: ',raiz_cuadrada
FinAlgoritmo
