Algoritmo impcal
	Escribir 'Bienvenido, a partir de los complejos voltaje y corriente este programa calculara la impedancia y los valores de los componentes'
	Escribir 'Ingrese el modulo y luego el angulo del voltaje'
	Leer modu_v
	Leer ang_v
	Escribir 'Ingrese el modulo y luego el angulo de la corriente'
	Leer modu_i
	Leer ang_i
	Escribir 'Ingrese la frecuencia de trabajo'
	Leer Freq
	// Calculo de impedancia
	modu <- modu_v/modu_i
	ang <- ang_v-ang_i
	Reals <- modu*cos(ang*PI/180)
	Imags <- modu*sen(ang*PI/180)
	Escribir 'La forma Binomica es: ',Reals,' + ',Imags,'J'
	// Calculo de componentes
	Escribir valcomp(Reals,Imags,Freq)
FinAlgoritmo

Funcion impval <- valcomp(Reals,Imags,Freq)
	// Imaginario Negativo -> capacitor
	// Imaginario Positivo -> inductor
	Si Imags>0 Entonces
		Escribir 'Carga Inductiva'
		Imp <- Imags/(2*PI*Freq)
		Escribir 'El valor del inductor es: ',Imp
	SiNo
		Escribir 'Carga Capacitiva'
		Imp <- -1/(2*PI*Freq*Imags)
		Escribir 'El valor del capacitor es: ',Imp
	FinSi
	// El valor de R es la parte REAL
	Escribir 'Valor de la resistencia: ',Reals
FinFuncion
