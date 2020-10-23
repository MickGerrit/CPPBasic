#include <iostream>
#include "Docent.h"
#include "Groep.h"
#include "Les.h"
#include "Lokaal.h"
#include "Rooster.h"
#include "Student.h"
#include "Vak.h"


int main()
{
	Rooster jaarRooster = Rooster();

	//In seconden. Dus start tijd is 09:00 (9 * 3600). Want ik ken de variabele voor tijd in Cpp niet
	jaarRooster.dagStartTijd = 32400;

	//Eind tijd is 20:00
	jaarRooster.dagEindTijd = 72000;

	jaarRooster.lessen[jaarRooster.maxLessenPerDag];
	jaarRooster.MaakJaarRooster();

	//Een weergave van de lessen in een week
	jaarRooster.ToonJaarRoosterPerWeek();
}
