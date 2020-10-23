#include "Library.h"
#include <iostream>

Library::Library() {
	books = std::vector<Book*>();
}

Library::~Library() {
	int length = books.size();
	for (int i = 0; i < length; i++) {
		if (books[0]) {
			delete books[0];
			books.erase(next(begin(books), +0));
		}
	}
}

void Library::createBook(std::string title) {
	Book* nb = new Book(title);
	books.push_back(nb);
}

Book* Library::rentBook(std::string title) {
	Book* thisBook;
	for (int i = 0; i < books.size(); i++)
	{
		if (books[i]->bookTitle == title) {
			thisBook = new Book(books[i]->bookTitle);
			delete books[i];
			books.erase(next(begin(books), +i));
			return thisBook;
		}
	}
	return nullptr;
}

Library::Library(const Library& library) {
	books = std::vector<Book*>();
	for (int i = 0; i < library.books.size(); i++) {
		books.push_back(new Book(library.books[i]->bookTitle));
	}
}

Library& Library::operator=(const Library& oldLibrary) {
	if (this != &oldLibrary) {
		for (size_t i = 0; i < books.size(); i++) {
			if (books[i]) {
				delete books[i];
				books.erase(next(begin(books), +i));
			}
		}
		books = std::vector<Book*>();
		for (int i = 0; i < oldLibrary.books.size(); i++) {
			books.push_back(new Book(oldLibrary.books[i]->bookTitle));
		}
	}
	return *this;
}