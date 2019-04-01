#pragma once
#include <iostream>

template <class TData, int nbCol=3, int nbRow=3>
class CMatrix
{
private:
	TData matrix[nbCol][nbRow];

public:
//Constructeurs
	CMatrix();
	~CMatrix();

//Methodes
	TData GetValue(int coordCol, int coordRow);
	int GetNbCol();
};

std::ostream& operator<<(std::ostream &output, const CMatrix<class TData> &matrix);
