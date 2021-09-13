#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int tempa = 5 < 10; // Bedingugn wahr Wert = 1
	int tempb = 5 > 10; // Bedingung unwahr Wert = 0

	printf("TEMPA=%i \t TEMB=%i\n\n\r", tempa, tempb);


	// Wenn die Bedingung in der Klammer erfüllt wird wird der TRUE-Block ausgeführt.
	// Wenn die Bedingung nicht zutrifft wird der gesamte Code-Block überspringen.
	if (5 < 10)
	{
		// wahr
		printf("5 ist kleiner als 10!\n\r");
	}

	if (5 > 10)
	{
		// wahr
		printf("5 ist groesser als 10!\n\r");
	}

	unsigned int lesen;
	scanf("%u", &lesen);

	if (lesen == 1)
	{
		// wahr
		printf("Bedingung ist wahr!\n\r");
	}
	else
	{
		// falsch
		printf("Bedingung ist nicht wahr!\n\r");
	}
}
