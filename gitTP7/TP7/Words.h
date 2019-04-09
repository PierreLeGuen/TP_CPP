#pragma once

#include <stdlib.h>
#include <string>
#include <fstream>
#include <regex>

class Words
{
public:
	Words();
	~Words();
};

template <int I = 0, int Limit = 0, class F>
void ExtractWords(const char *file, F &func) {	
	std::ifstream currFile(file);
	std::string line;
	int numLine = 1;
	if (currFile)
	{
		while (!currFile.eof())
		{
			int numMot = 1;
			std::getline(currFile, line);
			std::regex pattern(R"#(\w[\w\-]*)#");
			auto words_begin = std::sregex_iterator(line.begin(), line.end(), pattern);
			auto end = std::sregex_iterator();
			auto i = words_begin;
			std::transform(line.begin(), line.end(), line.begin(), ::tolower);
			while(i!=end) {
				std::string s = i->str();
				func(line, numLine, numMot, s.c_str());
				i++;
				numMot++;
			}
			numLine++;
		}
	}
	else std::cout << "file not found" << std::endl;

}
