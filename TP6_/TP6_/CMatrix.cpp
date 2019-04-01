#include "CMatrix.h"
#include <iostream>

template class CMatrix<int>;
template class CMatrix<float>;
template class CMatrix<double>;
template class CMatrix<std::string>;
template class CMatrix<char>;

template <class TData, int nbCol = 3, int nbRow = 3>
CMatrix<TData, nbCol, nbRow>::CMatrix()
{
	TData var = 0;
	for (size_t i = 0; i < nbCol; i++)
	{
		for (size_t j = 0; j < nbRow; j++)
		{
			matrix[i][j] = var;
		}
	}
}

template<class TData, int nbCol, int nbRow>
CMatrix<TData, nbCol, nbRow>::~CMatrix()
{
}

template<class TData, int nbCol, int nbRow>
TData CMatrix<TData, nbCol, nbRow>::GetValue(int coordCol, int coordRow)
{
	return matrix[coordCol][coordRow];
}

template<class TData, int nbCol, int nbRow>
int CMatrix<TData, nbCol, nbRow>::GetNbCol()
{
	return nbCol;
}

template<class TData>
std::ostream operator<<(std::ostream &outstring, const CMatrix<TData> &matrix)
{

	for (size_t i = 0; i < matrix.GetNbCol(); i++)
	{
		for (size_t j = 0; j < matrix.GetNbCol(); j++)
		{
			outstring << matrix.GetValue[i][j];
		}
		outstring << std::endl;
	}
	return outstring;
}