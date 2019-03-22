#include <iostream>
#include <string>
#include <algorithm>

#include "book.h"

using namespace std;

bool Book::isValid()
{
    if(this->m_isbn.size() != 10) return false;
    string isbn = this->m_isbn;
    isbn.erase(remove(isbn.begin(), isbn.end(), '-'), isbn.end());

    int i = stoi(isbn.substr(9, 1));
    int check = (1 * stoi(isbn.substr(0, 1)) +
                 2 * stoi(isbn.substr(1, 1)) +
                 3 * stoi(isbn.substr(2, 1)) +
                 4 * stoi(isbn.substr(3, 1)) +
                 5 * stoi(isbn.substr(4, 1)) +
                 6 * stoi(isbn.substr(5, 1)) +
                 7 * stoi(isbn.substr(6, 1)) +
                 8 * stoi(isbn.substr(7, 1)) +
                 9 * stoi(isbn.substr(8, 1))) % 11;

    return i == check;
}

ostream& operator<<(ostream& os, const Book& book)
{
    os << "Book(title=\"" <<book.m_title << "\", author=\"" << book.m_author << "\", isbn=\"" << book.m_isbn << "\")";
    return os;
}
