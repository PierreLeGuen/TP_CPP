#define _USE_MATH_DEFINES

#include "Complexe.h"
#include <iostream>
#include <cmath>



void Complexe::printComplexe()
{
	std::cout << "z = " << _reel << " + " << _img << "i" << std::endl;
}

void Complexe::Homothetie(double reel)
{
	_reel *= reel;
	_img *= reel;
}

//Getters
double Complexe::GetRe() const
{
	return _reel;
}

double Complexe::GetIm() const
{
	return _img;
}

double Complexe::GetMod() const
{
	return sqrt(pow(_reel, 2) + pow(_img, 2));
}

double Complexe::GetArg() const
{
	if (_reel < 0)
	{
		return M_PI;
	}
	else
	{
		return 2 * atan(_img / (_reel + GetMod()));
	}
}

Complexe & Complexe::operator=(const Complexe & complexe1)
{
	_reel = complexe1.GetRe();
	_img = complexe1.GetIm();

	return *this;
}



Complexe operator+(const Complexe & complexe1, const Complexe & complexe2)
{
	return Complexe(complexe1.GetRe() + complexe2.GetRe(), complexe1.GetIm() + complexe2.GetIm());
}

Complexe operator-(const Complexe & complexe1, const Complexe & complexe2)
{
	return Complexe(complexe1.GetRe() - complexe2.GetRe(), complexe1.GetIm() - complexe2.GetIm());
}

bool operator==(const Complexe & complexe1, const Complexe & complexe2)
{
	const double epsilon = 0.0000001;
	return std::fabs(complexe1.GetRe() - complexe2.GetRe() < epsilon) && std::fabs(complexe1.GetIm() - complexe2.GetIm() < epsilon);
}

std::ostream& operator<<(std::ostream & output, const Complexe & complexe)
{
	output << "Reel : " << complexe.GetRe() << " Img : " << complexe.GetIm();
	return output;
}

Complexe operator*(const Complexe & complexe1, const double val)
{
	return Complexe(complexe1.GetRe * val, complexe1.GetIm * val);
}

// Constructeurs
Complexe::Complexe()
{
	_reel = 0;
	_img = 0;
}

Complexe::Complexe(double reel, double imaginaire)
{
	_reel = reel;
	_img = imaginaire;
}

Complexe& Complexe::operator*=(const double val)
{
	_reel *= val;
	_img *= val;
	return *this;
}

Complexe::Complexe(const Complexe &comp)
{
}

Complexe::Complexe(const Complexe && comp)
{
}

Complexe::~Complexe()
{
}
