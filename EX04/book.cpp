#include <iostream>
#include <string>
#include <algorithm>

#include "book.h"

using namespace std;

bool Book::isValid()
{
    this->m_isValid = this->isInputValid() && this->isISBNValid();

    return this->m_isValid;
}

bool Book::isInputValid()
{
    return !this->m_author.empty() && !this->m_isbn.empty() && !this->m_title.empty();
}

bool Book::isISBNValid()
{
    string isbn = this->m_isbn;
    isbn.erase(remove(isbn.begin(), isbn.end(), '-'), isbn.end());
    if(isbn.size() != 10) return false;
    int modsum{0};
    for(unsigned long i = 0; i<10; i++)
    {
        modsum += stoi(isbn.substr(i, 1)) * (static_cast<int>(i)+1);
    }

    return modsum;
}

ostream& operator<<(ostream& os, const Book& book)
{
    os << "Book(title=\"" <<book.m_title << "\", author=\"" << book.m_author << "\", isbn=\"" << book.m_isbn << "\", validityStatus=\"" << book.m_isValid << "\")";
    return os;
}
