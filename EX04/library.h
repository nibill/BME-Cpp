#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "book.h"

using namespace std;

class Library
{
private:
    vector<Book>lib;
public:
    Library();
    void addBook(Book book);
    void printInventory();
    void cleanup();
};

#endif // LIBRARY_H
