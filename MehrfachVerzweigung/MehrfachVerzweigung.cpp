#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned int lesen;
	scanf("%u", &lesen);

	if (lesen == 1)
	{
		// Wenn die erste Bedingung wahr ist
		printf("Lesen ist 1!\n\r");
	}
	// Wenn keine der Vorherigen Bedingungen wahr sind
	else if(lesen == 2)
	{
		// Wenn die zweite Bedingung wahr ist
		printf("Lesen ist 2!\n\r");
	}
	// Wenn keine der Vorherigen Bedingungen wahr sind
	else
	{
		// Wenn keine Bedingung wahr ist
		printf("Keine der vorherigen Bedingungen trifft zu!\n\r");
	}
}