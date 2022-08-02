#include <iostream>
#include "Book.h"
using namespace std;


int main()
{
	Book gameOfThrones("Geroge Martin", "Game of Thrones", "Fantasy", 864);

	Book mathBook("James Stewart", "Calculas", "Math", 1392);

	Book cppBook("Bjarne Stroustrup", "The C++ Programming Language", "Programming", 1376);

	gameOfThrones.printBookDetails();
	mathBook.printBookDetails();
	cppBook.printBookDetails();

	return 0;
}
