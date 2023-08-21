#pragma once
#include "Book.h"
class SGK :
public Book
{
public:
	void setGrade(int a);
	int getGrade();
private:
	int grade;
};

