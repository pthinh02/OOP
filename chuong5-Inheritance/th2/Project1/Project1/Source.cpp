#include <iostream>
#include <string>
using namespace std;

class Book
{
public: 
	void introduce()
	{
		cout << "This is a book\n";
	}
protected:
	string publisher;
	int year;
};

class sachHocTap : public Book
{
public:

private:
	string subject;
};

class sachGiaoKhoa : public sachHocTap
{
public:

private:
	string school;
};
class sachBaiTap : public sachHocTap
{
public:

private:
	string level;		//Kho hoac de~
};

class Truyen : public Book
{
public:
	void introduce()
	{
		Book::introduce();
		cout << "I love this kind of books.";
	}
private:
	int limitAge;
};
class tieuThuyet : public Truyen
{
private: 
	int chapter;
};
class ngonTinh : public Truyen
{

};
class trinhTham : public Truyen
{

};
class truyenTranh : public Truyen
{
private:
	string name;
};

int main()
{

	Truyen* sach = new Truyen;
	sach->introduce();

	return 0;
}