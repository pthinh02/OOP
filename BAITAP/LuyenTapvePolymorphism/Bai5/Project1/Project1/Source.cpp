#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#define Pi 3.14
using namespace std;


class Hinh
{
public:
	virtual float square() = 0;
	virtual void getEdge() = 0;
	float s;
};

class Triangle : public Hinh
{
public:
	void getEdge() override
	{
		cout << "Nhap vao canh 1: ";
		cin >> a;
		cout << "Nhap vao canh 2: ";
		cin >> b;
		cout << "Nhap vao canh 3: ";
		cin >> c;
	}
	float square() override
	{
		p = (a + b + c) / 2;
		s = sqrt(p * (p - a) * (p - b) * (p - c));
		return s;
	}
private:
	float a, b, c;
	float p;
};

class Circle : public Hinh
{
public:
	void getEdge() override
	{
		cout << "Nhap vao Ban Kinh: ";
		cin >> r;
	}
	float square() override
	{
		s = Pi * r * r;
		return s;
	}
private:
	float r;
};

class Rectangle : public Hinh
{
public:
	void getEdge() override
	{
		cout << "Nhap vao Chieu dai: ";
		cin >> x;
		cout << "Nhap vao Chieu rong: ";
		cin >> y;
	}
	float square() override
	{
		s = x*y;
		return s;
	}
private:
	float x, y;
};

int main()
{
	Hinh* list[10];
	int count = 0;
	int select;

	do
	{

		cout << "======================================\n";
		cout << "Tinh dien tich cua hinh: \n";
		cout << "\t<1>.Tam giac\n";
		cout << "\t<2>.Hinh tron\n";
		cout << "\t<3>.Hinh chu nhat\n";
		cout << "\t<0>.Thoat\n";
		cout << "======================================\n";
		cout << "Moi nhap lua chon: ";
		cin >> select;
		if (select == 1)
		{
			list[count] = new Triangle;
			list[count]->getEdge();
			cout << "Dien tich la: " << list[count]->square() << endl;
		}
		else if (select == 2)
		{
			list[count] = new Circle;
			list[count]->getEdge();
			cout << "Dien tich la: " << list[count]->square() << endl;
		}
		else if (select == 3)
		{
			list[count] = new Rectangle;
			list[count]->getEdge();
			cout << "Dien tich la: " << list[count]->square() << endl;
		}
		count++;
	} while (select != 0);



	return 0;
}