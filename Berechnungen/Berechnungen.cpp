#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int zahl1;
	int zahl2;
	// Eingabe der Zahlen
	printf("Berechnungen:");
	printf("\n\rBitte geben Sie die erste Zahl ein: ");
	scanf("%i", &zahl1);
	printf("Bitte geben Sie die zweite Zahl ein: ");
	scanf("%i", &zahl2);

	int addition = zahl1 + zahl2;		// Addition von zahl1 plus zahl2
	int subtraktion = zahl1 - zahl2;	// Addition von zahl1 minus zahl2
	int multiplikation = zahl1 * zahl2;	// Multiplikation von zahl1 und zahl2
	int division = zahl1 / zahl2;		// Division von zahl1 durch zahl2

	int wurzel = sqrt(zahl1);			// Quadrat Wurzel der zahl1
	int quadrat = pow(zahl1, 2);		// Zahl1 zum Quadrat

	printf("\n\raddition: %i", addition);
	printf("\n\rsubtraktion: %i", subtraktion);
	printf("\n\rmultiplikation: %i", multiplikation);
	printf("\n\rdivision: %i", division);
	printf("\n\rwurzel: %i", wurzel);
	printf("\n\rquadrat: %i", quadrat);
}

/*
	Operator	Bedeutung		Präzedenz
	*			Multiplikation	mittel
	/			Division		mittel
	%			Modulo			mittel
	+			Addition		niedrig
	-			Subtraktion		niedrig
*/