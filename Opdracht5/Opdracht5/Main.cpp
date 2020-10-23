#include <iostream>
#include "Library.h"

int main() {
	Library library = Library();
	library.createBook("Hamlet");
	library.createBook("Romeo & Julia");
	Book* hamlet = library.rentBook("Hamlet");
	Book* romeoAndJulia = library.rentBook("Romeo & Julia");
	std::cout << "Renting this book: " << hamlet->bookTitle << std::endl;
	std::cout << "Renting this book: " << romeoAndJulia->bookTitle << std::endl;
	delete romeoAndJulia;
	delete hamlet;
}
