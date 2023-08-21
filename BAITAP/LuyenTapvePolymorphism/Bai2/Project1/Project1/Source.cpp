#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Diem
{
public:
	float x;
	float y;
};

class DaGiac
{
private:
	vector <Diem> diem_list;
	Diem diem;
public:
	void nhapToaDoDiem(int a, int b)
	{
		diem.x = a;
		diem.y = b;
		diem_list.push_back(diem);
	}
	void tinhTien(vector<Diem> toado, int n)
	{
		int select;
		cout << "============================\n";
		cout << "<1>. Len.\n";
		cout << "<2>. Xuong.\n";
		cout << "<3>. Trai.\n";
		cout << "<4>. Phai.\n";
		cin >> select;
		for (int i = 0; i < toado.size(); i++)
		{
			if (select == 1)
			{
				toado[i].y = toado[i].y + n;
			}
			else if (select == 2)
			{
				toado[i].y = toado[i].y - n;
			}
			else if (select == 3)
			{
				toado[i].x = toado[i].x - n;
			}
			else if (select == 4)
			{
				toado[i].x = toado[i].x + n;
			}
		}
	}
	void xuatToaDoDiem(vector<Diem> toado)
	{
		for (int i = 0; i < toado.size(); i++)
		{
			cout << "Toa do " << i + 1 << " : (" << toado[i].x << "," << toado[i].y << ")\n";
		}
	}
};

class TamGiac : public DaGiac
{
private:

public:

};
class TuGiac : public DaGiac
{

};


int main()
{
	DaGiac* dg1 = new DaGiac;
	dg1->nhapToaDoDiem(1, 2);
	dg1->nhapToaDoDiem(2,5);
	dg1->nhapToaDoDiem(4, -2);
	dg1->nhapToaDoDiem(-1, 4);
	dg1->tinhTien(Diem diem_list, 3);

	return 0; 
}