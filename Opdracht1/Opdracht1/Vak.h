//Het vak, dit is wat er wordt geleerd aan studenten tijdens een les
class Vak {
public:
	std::string vakNaam;
	int vakJaar;
	float tijd;

	//Docenten die het vak kunnen geven
	Docent vakDocenten[];

	//studenten die dit vak in het vakkenpakket hebben
	Student ingeschrevenStudenten[];

	void GetIngeschrevenStudenten();
};