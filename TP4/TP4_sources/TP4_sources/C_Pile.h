#pragma once
#include"CStack.h"
#include<stdlib.h>
class C_Pile :
	public CStack {
private:

protected:

public:
	C_Pile();
	C_Pile(int size);
	~C_Pile();
	int pop();
	int top();
};

