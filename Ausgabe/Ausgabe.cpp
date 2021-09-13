#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Verschiedene Escape sequenzen
	printf("Hello World!");
	printf("\n"); // Newline Zeilenposition
	printf("\r"); // Carriage Return (bewegt den Cursor zur ersten position in der Zeile)
	printf("\t"); // Tab

	// Ausgabe von verschiedenen Datentypen
	printf("\n\rHello World!");
	printf("\n\r50");

	// Ausgabe von verschiedenen Datentypen über Variablen
	char text[] = "Hallo Welt!";
	printf("Text: %s", text); // Ausgabe eines Textes mithilfe einer Variable
	int nummer = 55;
	printf("Nummer: %i", nummer); // Ausgabe einer Nummer mithilfe einer Variable
}

/*
		Escape		HEX in ASCII	Character represented
		\a			07				Alert (Beep, Bell) (added in C89)
		\b			08				Backspace
		\e			1B				Escape character
		\f			0C				Formfeed Page Break
		\n			0A				Newline (Line Feed); see notes below
		\r			0D				Carriage Return
		\t			09				Horizontal Tab
		\v			0B				Vertical Tab
		\\			5C				Backslash
		\'			27				Apostrophe or single quotation mark
		\"			22				Double quotation mark
		\?			3F				Question mark (used to avoid trigraphs)
		\nnn		any				The byte whose numerical value is given by nnn interpreted as an octal number
		\xhh…		any				The byte whose numerical value is given by hh… interpreted as a hexadecimal number
		\uhhhh		none			Unicode code point below 10000 hexadecimal
		\Uhhhhhhhh	none			Unicode code point where h is a hexadecimal digit
*/

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