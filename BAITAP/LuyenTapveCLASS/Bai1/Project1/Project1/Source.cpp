#include <iostream>
#include <string>
using namespace std;

struct phanSo
{
	float tuso;
	float mauso;
};
class tinhtoan
{
public: 
	tinhtoan(float a, float b, float c, float d)
	{
		ps1->tuso = a;
		ps1->mauso = b;
		ps2->tuso = c;
		ps2->mauso = d;
	}
	float sum()
	{
		float s;
		s = (ps1->tuso / ps1->mauso) + (ps2->tuso / ps2->mauso);
		return s;
	}
	float minus()
	{
		float s;
		s = (ps1->tuso / ps1->mauso) - (ps2->tuso / ps2->mauso);
		return s;
	}
	float multi()
	{
		float s;
		s = (ps1->tuso / ps1->mauso) * (ps2->tuso / ps2->mauso);
		return s;
	}
	float divide()
	{
		float s;
		s = (ps1->tuso / ps1->mauso) / (ps2->tuso / ps2->mauso);
		return s;
	}

private:
	float tong, hieu, thuong, tich;
	phanSo *ps1=new phanSo;
	phanSo *ps2=new phanSo;


};

int main()
{
	tinhtoan* cal = new tinhtoan(9, 3, 4, 2);
	cout << "Tong cua 2 phan so: " << cal->sum()<<endl;
	cout << "Hieu cua 2 phan so: " << cal->minus()<<endl;
	cout << "Tich cua 2 phan so: " << cal->multi() << endl;
	cout << "Thuong cua 2 phan so: " << cal->divide()<<endl;
	return 0;
}