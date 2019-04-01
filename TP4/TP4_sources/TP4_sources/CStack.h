#pragma once
class CStack
{
private:

protected:
	int _size;
	int *_data;
	int _position;

public:
	CStack();
	~CStack();
	CStack(int size);
	bool push(int value);
	int GetSize();
	void printStack();
};

