// TP3.cpp : définit le point d'entrée pour l'application console.
//

#include <iostream>
#include "Complexe.h"

int main()
{
	Complexe c1(1,5), c2(0, 0), c3;
	c1.printComplexe();
	c2 = c1;
	c3 = (c2 + c1);
	c3 == c1;
	std::cout << c3 << std::endl;
	// c2.printComplexe();
	// c3.printComplexe();
	getchar();
    return 0;
}

