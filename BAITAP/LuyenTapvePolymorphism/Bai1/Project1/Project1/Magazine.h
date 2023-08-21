#pragma once
#include "Book.h"
class Magazine :
    public Book
{
public:
	void setPeriod(string n);
	string getPeriod();
private:
	string period; 
};

