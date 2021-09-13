#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned int lesen;
	scanf("%u", &lesen);


	// Unterscheidung zwischen:
	// - Kopfgesteurt:
	//		Bedingung wird zuerst überprüft
	// - Fußgesteuert:
	//		BEdingung wird nach dem ausführen überprüft

	// Kopfgesteuert
	

	// While-Schleife
	// Ablauf:
	// Bedingung wird überprüft.
	// - Bedingung ist wahr:
	//		Der Code Block wird ausgeführt
	//		Es wird wieder zum Anfang der Schleife Gesprungen
	// - Bedingung ist nicht wahr:
	//		Der gesamte Code Block wird übersprungen
	//while (true)
	//{
	//	printf("True :)\n\r");
	//}
	
	// For-Schleife
	// Ablauf:
	// Bedingung wird überprüft.
	// - Bedingung ist wahr:
	//		Der Code Block wird ausgeführt
	//		Der Variable wird 1 hinzugefügt
	//		Es wird wieder zum Anfang der Schleife Gesprungen
	// - Bedingung nicht wahr:
	//		Der gesamte Code Block wird übersprungen
	for (unsigned int i = 0; i < lesen; i++)
	{
		printf("Kopfgesteuerte For-Schleife: %u\n\r", i);
	}

	// Fußgesteuert
	// Do-While-Schleife
	// Ablauf:
	// Der Code wird ausgeführt.
	// Die BEdingung wir überprüft:
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