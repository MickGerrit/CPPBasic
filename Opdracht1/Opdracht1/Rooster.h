class Rooster
{
public:
	int maxLessenPerDag;

	//de lessen die met MaakJaarRooster() worden gemaakt en ingedeeld op basis van alles andere data
	Les lessen[];
	float dagStartTijd;
	float dagEindTijd;

	//Een functie om eerst het jaar rooster te maken (en dus ook lessen op de juiste tijd indelen etc.)
	void MaakJaarRooster();

	//Twee functies om de jaarroosters te kunnen tonen
	void ToonJaarRoosterPerWeek();
	void ToonJaarRoosterPerDag();
};