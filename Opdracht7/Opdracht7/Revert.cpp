#include "Revert.h"

Revert::Revert()
{
}

void Revert::reverseFile(std::string fileOut, std::string fileIn) {
	std::ofstream streamOut;
	streamOut.open(fileOut);
	std::ifstream streamIn;
	streamIn.open(fileIn);

	if (!streamOut || !streamIn) {
		std::cout << "That is not a valid file" << std::endl;
		exit(1);
	}

	streamIn.seekg(0, streamIn.end);
	int length = streamIn.tellg();

	for (int i = 1; i < length + 1; i++) {
		streamIn.seekg(-i, streamIn.end);
		char ch = streamIn.peek();
		streamOut.put(ch);
	}
	streamOut.close();
	streamIn.close();
}