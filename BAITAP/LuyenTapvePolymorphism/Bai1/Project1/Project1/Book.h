#pragma once
#include <string>
using namespace std;
class Book
{
public:
	Book(string n, string p, int year, int pag, float pr);
	Book();
	void setName(string n);
	string getName();		
	void setPublisher(string n);
	string getPublisher();
	void setPublishYear(int a);
	int getPublishYear();
	void setPage(int a);
	int getPage();
	void setPrice(float a);
	int getPrice();
protected:
		string name;
		string publisher;
		int publishYear;
		int page;
		float price;
};

