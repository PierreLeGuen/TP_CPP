#pragma once
#include "CStack.h"
class C_File :
	public CStack
{
public:
	C_File();
	~C_File();
	C_File(int size);
	int pop();
	int top();
};

