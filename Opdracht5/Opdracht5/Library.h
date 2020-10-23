#pragma once
#include <vector>
#include "Book.h"

class Library {
public:
	std::vector<Book*> books;

	void createBook(std::string title);
	Book* rentBook(std::string title);

	Library(const Library& library);
	Library& operator=(const Library&);

	Library();
	~Library();
};

