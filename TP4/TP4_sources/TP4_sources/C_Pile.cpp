#include "stdafx.h"
#include "C_Pile.h"


C_Pile::C_Pile():CStack()
{
}

C_Pile::C_Pile(int size):
	CStack(size) {
}

C_Pile::~C_Pile()
{
}

int C_Pile::pop()
{
	if (_position != 0) {
		return _data[--_position];
	}
	return EXIT_FAILURE;
}

int C_Pile::top()
{
	if (_position != 0) {
		return _data[_position - 1];
	}
	return EXIT_FAILURE;
}