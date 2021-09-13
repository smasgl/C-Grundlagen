#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned int lesen;
	scanf("%u", &lesen);


	// Unterscheidung zwischen:
	// - Kopfgesteurt:
	//		Bedingung wird zuerst �berpr�ft
	// - Fu�gesteuert:
	//		BEdingung wird nach dem ausf�hren �berpr�ft

	// Kopfgesteuert
	

	// While-Schleife
	// Ablauf:
	// Bedingung wird �berpr�ft.
	// - Bedingung ist wahr:
	//		Der Code Block wird ausgef�hrt
	//		Es wird wieder zum Anfang der Schleife Gesprungen
	// - Bedingung ist nicht wahr:
	//		Der gesamte Code Block wird �bersprungen
	//while (true)
	//{
	//	printf("True :)\n\r");
	//}
	
	// For-Schleife
	// Ablauf:
	// Bedingung wird �berpr�ft.
	// - Bedingung ist wahr:
	//		Der Code Block wird ausgef�hrt
	//		Der Variable wird 1 hinzugef�gt
	//		Es wird wieder zum Anfang der Schleife Gesprungen
	// - Bedingung nicht wahr:
	//		Der gesamte Code Block wird �bersprungen
	for (unsigned int i = 0; i < lesen; i++)
	{
		printf("Kopfgesteuerte For-Schleife: %u\n\r", i);
	}

	// Fu�gesteuert
	// Do-While-Schleife
	// Ablauf:
	// Der Code wird ausgef�hrt.
	// Die BEdingung wir �berpr�ft:
	// - Bedingung ist wahr:
	//		Es wird wieder zum Anfang der Schleife gesprungen
	// - Bedingung ist nicht wahr:
	//		Die Schleife wird beendet.

	unsigned int lesen2 = 0;
	do
	{
		printf("Bitte geben sie etwas anderes als 1 ein: ");
		scanf("%u", &lesen2);
	} while (lesen2 == 1);

	printf("Lesen ist nicht 1! sondern: %u", lesen2);
}