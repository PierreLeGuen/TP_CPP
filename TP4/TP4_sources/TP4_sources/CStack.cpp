#include "stdafx.h"
#include "CStack.h"
#include <iostream>


CStack::CStack():CStack(10)
{
}


CStack::~CStack()
{
}

CStack::CStack(int size)
{
	_position = 0;
	_data = new int[size];
	_size = size;
}

int CStack::GetSize()
{
	return _size;
}

void CStack::printStack()
{
	for (int i = _position-1; i >= 0; --i) {
		std::cout << "| " << _data[i] << " |" << std::endl;
		std::cout << "|_" << "_" << "_|" << std::endl;
	}
	if (_position == 0) {
		std::cout << "Stack is EMPTY" << std::endl;
	}
	std::cout << std::endl;
}

bool CStack::push(int value)
{
	if (_position != _size) {
		_data[_position] = value;
		_position++;
		return true;
	}
	else return false;
}
