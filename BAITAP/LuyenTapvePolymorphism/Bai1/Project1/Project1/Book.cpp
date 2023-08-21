#include "Book.h"
Book::Book(string n, string p, int year, int pag, float pr)
	: name(n),
	publisher(p),
	publishYear(year),
	page(pag),
	price(pr)
{}
Book::Book(){}
void Book::setName(string n)
{
	name = n;
}
string Book::getName()
{
	return name;
}
void Book::setPublisher(string n)
{
	publisher = n;
}
string Book::getPublisher()
{
	return publisher;
}
void Book::setPublishYear(int a)
{
	publishYear = a;
}
int Book::getPublishYear()
{
	return publishYear;
}
void Book::setPage(int a)
{
	page = a;
}
int Book::getPage()
{
	return page;
}
void Book::setPrice(float a)
{
	price = a;
}
int Book::getPrice()
{
	return price;
}