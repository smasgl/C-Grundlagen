#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Prototypen => mit diesen Prototypen weiß der Compiler von der Funktion die später folgt
int Absolut(int zahl);
void Ausgeben();

int main()
{
	// Meine Funktion
	Ausgeben();

	// Math.h library
	// Die Math.h library besitz viele solche funktionen die das Programmieren erleichtern
	// z.B.: abs => Absolut
	int ergebnis = abs(5);	// Absolut Wert
	ergebnis = pow(5, 2);	// Hoch
	ergebnis = sqrt(5);		// Wurzel
	ergebnis = sin(5);		// Sinus
	ergebnis = tan(5);		// Tangens
	ergebnis = round(5.6);	// Runden
}

/*
Rückgabetyp, Name, (Formale Parameter) */
int Absolut(int zahl)	// gibt eine Zahl zurück heißt Absolut und bekommt eine Zahl als Parameter
{
	if (zahl >= 0)
		return zahl;	// Ergebnis mit dem Schlüsselwort return zurückgeben
	else
		return -(zahl);	// Ergebnis mit dem Schlüsselwort return zurückgeben
}

/*
Rückgabetyp, Name, (Formale Parameter) */
void Ausgeben() // gibt nichts zurück heißt Ausgeben und bekommt nichts als Parameter
{
	// Ergebis steht im Funktionsaufruf selbst.
	printf("My func: %i\n\r", Absolut(-1));
}