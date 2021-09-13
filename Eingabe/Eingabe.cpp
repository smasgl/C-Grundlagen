#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Eingabe von verschiedenen Datentypen über Variablen
	unsigned int positiveNummer;
	scanf("%u\n\r", &positiveNummer); // Einlesen einer positiven zahl
	int nummer;
	scanf("%i\n\r", &nummer); // Einlesen einer zahl
	double kommaZahl;
	scanf("%lf\n\r", &kommaZahl); // Einlesen einer komma-zahl
	char wort[100];
	scanf("%s\n\r", wort); // Einlesen eines Wortes
	char text[100];
	scanf("%[^\n]\n\r", text); // Eingabe eines Textes

	// Ausgabe der Eingabe
	printf("\n\rPositive Nummer: %u", positiveNummer);
	printf("\n\rNummer: %i", nummer);
	printf("\n\rKommazahl: %lf", kommaZahl);
	printf("\n\rWort: %s", wort);
	printf("\n\rText: %s", text);
}

/*
		specifier	Output																			Example
		d or i		Signed decimal integer															392
		u			Unsigned decimal integer														7235
		o			Unsigned octal																	610
		x			Unsigned hexadecimal integer													7fa
		X			Unsigned hexadecimal integer (uppercase)										7FA
		f			Decimal floating point, lowercase												392.65
		F			Decimal floating point, uppercase												392.65
		e			Scientific notation (mantissa/exponent), lowercase								3.9265e+2
		E			Scientific notation (mantissa/exponent), uppercase								3.9265E+2
		g			Use the shortest representation: %e or %f										392.65
		G			Use the shortest representation: %E or %F										392.65
		a			Hexadecimal floating point, lowercase											-0xc.90fep-2
		A			Hexadecimal floating point, uppercase											-0XC.90FEP-2
		c			Character																		a
		s			String of characters															sample
		p			Pointer address																	b8000000
		n			Nothing printed.
					The corresponding argument must be a pointer to a signed int.
					The number of characters written so far is stored in the pointed location.
		%			A % followed by another % character will write a single % to the stream.		%
*/