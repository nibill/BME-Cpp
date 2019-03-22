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
    for(auto it = begin(this->lib); it != end(this->lib);)
    {
        if(!it->isValid())
        {
            it = this->lib.erase(it);
        }
        else
        {
            ++it;
        }
    }
}
