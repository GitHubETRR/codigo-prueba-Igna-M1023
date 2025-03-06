Funcion binpol <- binpol (Reals,Imags)
	// Se calcula el modulo
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
	Escribir 'Valor de grados: ',ang_cuadrante
	Escribir 'Valor de raiz cuadrada: ',raiz_cuadrada
FinFuncion

Algoritmo SumPol
	Escribir 'Hola, este programa sumara 2 complejos en forma (A+J), usted puede elegir en que forma mostrar el resultado'
	Escribir 'Ingrese A (Real) y luego J (Imaginario) del primer complejo'
	Leer RealC1
	Leer ImagC1
	Escribir 'Ingrese A (Real) y luego J (Imaginario) del segundo complejo'
	Leer RealC2
	Leer ImagC2
	// Se suman los 2 complejos
	Reals <- RealC1+RealC2
	Imags <- ImagC1+ImagC2
	Escribir 'Ingrese 1 para Binomica, 2 para Polar'
	Leer Formato
	// Si se selecciona 2 se llama a la funcion binpol
	Si Formato=1 Entonces
		Escribir 'La suma entre los 2 complejos da: ',Reals,' + ',Imags,'J'
	SiNo
		Escribir 'La forma en Polar es: '
		Escribir binpol(Reals,Imags)
	FinSi
FinAlgoritmo
