#include <locale>
#include <iostream>
#include "FileHandling.hpp"
#include "Words.h"

void wordIterator(const std::string line, const int numLine, const int numMot, const char *word);
void dirIterator(const char *file);

void dirIterator(const char *file)
{
	// std::cout << "test" << std::endl;
	// std::cout << file << std::endl;
	ExtractWords<100>(file, wordIterator);
}

void wordIterator(const std::string line, const int numLine, const int numMot, const char *word) {
	std::cout << word << std::endl;
}

int main()
{
	// Mise en place de la locale pour que la conversion de casse (std::lower) puisse g�rer les carat�res accentu�s
	// Par d�fault la locale en C (codage ASCII 7 bits) ; sous Unix, la locale s'�crit "fr_FR"
	std::locale::global(std::locale("fr-FR"));
	IterateOnFileDir<100>("./textes/", dirIterator);
	return(EXIT_SUCCESS);
}
