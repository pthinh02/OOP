#pragma once
#include "Book.h"
class Novel :
    public Book
{
public:
	void setKind(string n);
	string getKind();
private:
	string kind;
};

