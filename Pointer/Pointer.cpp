#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Erstellen eines Pointers (Zeigers)

	int* zeiger1;           /* kann eine Adresse aufnehmen, die auf einen Wert vom Typ Integer zeigt */
	int* zeiger2;           /* das Leerzeichen kann sich vor oder nach dem Stern befinden */
	int* zeiger3;          /* ebenfalls möglich */

	// Zuweisung 
	int variable1 = 0;
	int feld1[10];
	int* zeiger4;
	int* zeiger5 = NULL;
	zeiger4 = &variable1;
	zeiger4 = feld1;
	zeiger4 = zeiger5;
	zeiger4 = NULL;

	// Addressoperator &
	int variable2 = 0;
	int* zeiger6 = &variable2;	// Mit dem Addressoperator & nimmt man die Adresse der Variable

	// Inhaltsoperator *
	int variable3 = 8;
	int* zeiger7 = &variable3;
	int variable4 = *zeiger7;	// Mit dem Inhaltsoperator * nimmt man den Inhalt der Variable

	int variable5 = (int)&variable4;	// gibt den Inhalt der Adresse also die Hexa-Dezimal-Adresse selber aus
	printf("%i", variable5);
}