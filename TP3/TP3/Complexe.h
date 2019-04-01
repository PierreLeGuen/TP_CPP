#include <iostream>
class Complexe
{
private:
	double _reel;
	double _img;

public:
	Complexe();		// Constructeur par défaut
	~Complexe();	// Destructeur éventuellement virtuel
	Complexe(const Complexe &comp);		// Constructeur de recopie
	Complexe(const Complexe &&comp);	//Constructeur par recopie
	Complexe(double reel, double imaginaire);

	//Opérateurs
	Complexe& operator=(const Complexe &complexe1); // Operateur d'affectation
	Complexe& operator*=(const double val);

	// Getters
	double GetRe() const;
	double GetIm() const;
	double GetMod() const;
	double GetArg() const;

	//Méthodes
	void printComplexe();
	void Homothetie(double reel);
};

//faire les fonctions en externe = plus de multiplicité
Complexe operator+(const Complexe & complexe1, const Complexe & complexe2);
Complexe operator-(const Complexe & complexe1, const Complexe & complexe2);
bool operator==(const Complexe & complexe1, const Complexe & complexe2);
std::ostream& operator<<(std::ostream &output, const Complexe &complexe);
Complexe operator*(const Complexe & complexe1, const double val);
