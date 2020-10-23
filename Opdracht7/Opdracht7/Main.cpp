#include <iostream>
#include <sstream>
#include <fstream>
#include <ios>
#include "Revert.h"
#include "Combine.h"


int main()
{
	Revert fileRevert;
	Combine fileCombine;

	std::string pathIn = "D:/GameDevelopment/HKU/C++Herkansing/Opdracht7/TextFiles/Text1.txt";
	std::string pathOut = "D:/GameDevelopment/HKU/C++Herkansing/Opdracht7/TextFiles/Text2.txt";

	fileRevert.reverseFile(pathOut, pathIn);

	std::string pathItem1 = "D:/GameDevelopment/HKU/C++Herkansing/Opdracht7/TextFiles/Text3.txt";
	std::string pathItem2 = "D:/GameDevelopment/HKU/C++Herkansing/Opdracht7/TextFiles/Text4.txt";
	std::string pathItemCombined = "D:/GameDevelopment/HKU/C++Herkansing/Opdracht7/TextFiles/Text5.txt";

	fileCombine.combineTwoFiles(pathItem1, pathItem2, pathItemCombined);
}
