#include <iostream>
#include "library.h"

using namespace std;

Library::Library()
{

}

void Library::addBook(Book book)
{
    this->lib.push_back(book);
    cout << "Add: " << book << endl;
}

void Library::printInventory()
{
    cout << "Inventory: " << endl;
    for(auto b : this->lib) cout << b << endl;
}

void Library::cleanup()
{
    cout << "Cleanup inventory" << endl;
    for(vector<Book>::iterator it = begin(this->lib); it != end(this->lib);)
    {
        if(!it->isValid())
        {
            it = this->deleteBook(it);
        }
        else
        {
            ++it;
        }
    }
}

vector<Book>::iterator Library::deleteBook(vector<Book>::iterator it)
{
    cout << "Removing: " << static_cast<Book>(*it) << endl;
    return this->lib.erase(it);
}
