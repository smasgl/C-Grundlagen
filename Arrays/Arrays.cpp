#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Berechnung der Durchschnittstemperatur jede Stunde 
	// bräuchte man 24 Variablen =>
	// double messwert1, messwert2, messwert3,... messwert23, messwert24
	// was ist aber wenn das ergebnis dafür genauer sein müsste und man jede Minute
	// messen muss?
	// Dann wären dass 24 * 60 also 1440 Variablen =>
	// double messwert1, messwert2, messwert3,... messwert1439, messwert1440
	// Über tausend Variablen anzulegen ist jedoch viel Arbeit...

	// Einfacher geht es mit einem Feld von Variablen (Arrays) 
	// Bei einem Array der größe 1440 sieht das dann so aus:

	// 1. Art von Deklaration
	// Typ Name		[ Anzahl ]
	double messwerte[1440]; // => hier haben wir 1440 double Variablen auf einmal angelegt.
	// 2. Art von Deklaration
	// Typ Name		 [] = { Wert1, Wert2, Wert3,... }
	double messwerte2[] = { 35.8, 37.0, 22.9 }; // => hier haben wir 3 double Variablen angelegt
	// Wertezuweisung
	messwerte[0] = 23.9;
	messwerte[1] = 25.0;
	messwerte[1026] = 26.1;

	// Zugriff auf diese Variablen erfolgt durche eine Nummer auch Index genannt
	// Dieser Wert fängt bei 0 an und geht bis zur Feldgröße -1 da wir bei 0 anfangen zu zählen

	// Beispiel:
	double messwerte3[5];

	messwerte3[0] = 23.0;
	messwerte3[1] = 22.2;
	messwerte3[2] = 21.7;
	messwerte3[3] = 20.9;
	messwerte3[4] = 20.5;

	// Visuelle Darstellung:
	// Index:	| [0]	 | [1]	  | [2]   | [3]   | [4]   |
	// Werte :	| [23.0] | [22.2] | [21.7]| [20.9]| [20.5]|

	printf("Erster Wert (Index 0): %lf\n\r", messwerte3[0]);
	printf("Letzter Wert (Index 4): %lf\n\r", messwerte3[4]);

	// Durchgehen in einer For-Schleife

	for (unsigned char i = 0; i < 3; i++)
	{
		printf("Messwerte2: [Index %u] = %lf\n\r", i, messwerte2[i]);
	}
}