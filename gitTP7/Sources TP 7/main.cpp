#include <locale>
#include <iostream>
#include "FileHandling.hpp"

void test(const char *file)
{
	//...
}

int main()
{
	// Mise en place de la locale pour que la conversion de casse (std::lower) puisse gérer les caratères accentués
	// Par défault la locale en C (codage ASCII 7 bits) ; sous Unix, la locale s'écrit "fr_FR"
	std::locale::global(std::locale("fr-FR"));

	//...
	IterateOnFileDir<100>("./textes/",test);
	//...

	return(EXIT_SUCCESS);
}
