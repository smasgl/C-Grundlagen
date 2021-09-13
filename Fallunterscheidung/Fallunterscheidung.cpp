#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned int lesen;
	scanf("%u", &lesen);

	switch (lesen)
	{
		// Wenn der Wert 1 ist
		case 1:
			printf("Der Wert ist 1!");
			break;
		case 2:
			printf("Der Wert ist 2!");
			break;
		case 5:
			printf("Der Wert ist 5!");
			break;
		// Wenn keiner der vorherigen BEdingungen wahr sind
		default:
			printf("Keine vorherige Bedingung trifft zu!");
			break;
	}
}