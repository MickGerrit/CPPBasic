#include "Combine.h"

Combine::Combine()
{
}

void Combine::combineTwoFiles(std::string fileItem1, std::string fileItem2, std::string fileItemCombined) {
	std::ifstream streamIn1;
	streamIn1.open(fileItem1);
	std::ifstream streamIn2;
	streamIn2.open(fileItem2);
	std::ofstream streamOut;
	streamOut.open(fileItemCombined);

	std::string line;
	std::string line2;
	if (!streamIn1 || !streamIn2 || !streamOut) {
		std::cout << "That is not a valid file" << std::endl;
		exit(1);
	}

	while (std::getline(streamIn1, line) && std::getline(streamIn2, line2)) {

		for (size_t i = 0; i < line.size(); i++) {
			streamOut.put(line[i]);
		}
		streamOut.put('\n');

		for (size_t i = 0; i < line2.size(); i++) {
			streamOut.put(line2[i]);
		}
		streamOut.put('\n');
	}
	while (std::getline(streamIn1, line)) {
		for (size_t i = 0; i < line.size(); i++) {
			streamOut.put(line[i]);
		}
		streamOut.put('\n');
	}
	while (std::getline(streamIn2, line2)) {
		for (size_t i = 0; i < line2.size(); i++) {
			streamOut.put(line2[i]);
		}
		streamOut.put('\n');
	}
}