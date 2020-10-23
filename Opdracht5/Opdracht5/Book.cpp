#include "Book.h"
#include <iostream>

Book::Book(std::string t) :bookTitle(t) {
	std::cout << "New book: " << t << std::endl;
}

Book::~Book() {
	std::cout << "Deleted book: " << bookTitle << std::endl;
}
