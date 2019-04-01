// TP4_sources.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include "C_Pile.h"
#include "C_File.h"




int main()
{
	C_Pile pile1(15);
	C_File lifo1(15);
	pile1.push(1);
	pile1.push(17);
	pile1.pop();
	pile1.top();

	lifo1.push(1);
	lifo1.push(2);
	lifo1.push(3);
	lifo1.push(4);
	lifo1.printStack();
	lifo1.pop();
	lifo1.printStack();
	lifo1.pop();
	lifo1.pop();
	lifo1.pop();
	lifo1.printStack();
	getchar();
    return 0;
}

