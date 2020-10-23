//De ingedeelde groep van studenten, studenten worden bij elkaar gezet op basis van vakkenpakket
class Groep {
public:
	int maxStudenten;
	std::string naam;
	Student leerlingen[];
	Vak vakken[];

	//Krijg hier de array van leerlingen door middel van een vak
	void MaakGroepLeerlingen(Vak vak);
};