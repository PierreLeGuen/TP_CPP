#include "stdafx.h"
#include "C_File.h"


C_File::C_File() :
	CStack(10)
{
}


C_File::~C_File()
{
}

C_File::C_File(int size):
	CStack(size)
{
}

int C_File::pop()
{
	int value = 0;
	if (_position != _size && _position != 0) {
		value = _data[0];
		for (int i = 0; i < _position; ++i) {
			_data[i] = _data[i + 1];
		}
		_position--;
	}
	return value;
}


