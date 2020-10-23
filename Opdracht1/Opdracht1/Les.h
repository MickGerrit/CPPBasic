//De les is een object wat 
class Les
{
public:
	Docent lesDocent;
	Vak gegevenVak;
	Student lesStudenten[];
	Lokaal lesLokaal;
	float startTijd;
	float eindTijd;
	float dag;

	//Wanneer de les vervalt, moet dit zichbaar zijn op het rooster of eventueel wordt het rooster aangepast
	void VervalDeLes();
};
