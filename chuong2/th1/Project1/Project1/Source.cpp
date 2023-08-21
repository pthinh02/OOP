#include <iostream>
#include <string>
using namespace std;

class student
{
private:
	int id;
	string name;
	int age;
	string country;
	float height;
	float weight;

public:
	int diem[8];
	student(string fn, string que, int a)
	{
		name = fn;
		country = que;
		age = a;
	}
	student() {
		name = "UNKNOWN";
		country = "UNKNOWN";
		age = 0;
	}
	~student()
	{
		cout << "\nDELETED student";
	}
	void introduce()
	{
		cout << "Ten toi la: " << name << endl;
		cout << "Toi den tu: " << country << endl;
		cout << "Toi " << age << " tuoi.\n";
	}
	void xuatdiem()
	{
		cout << "Toan: " << diem[0]<< endl;
		cout << "Ly: " << diem[1] << endl;
		cout << "Hoa: " << diem[2] << endl;
		cout << "Van: " << diem[3] << endl;
		cout << "Anh: " << diem[4] << endl;
		cout << "Sinh: " << diem[5] << endl;
		cout << "Su: " << diem[6] << endl;
		cout << "Dia: " << diem[7] << endl;

	}
	void dtb()
	{
		float dtb = 0;
		for (int i = 0; i < 8; i++)
		{
			dtb += diem[i];
		}
		dtb = dtb / 8;
		if (dtb >= 8)
		{
			cout << "Hoc luc: Gioi\n";
			cout << "Diem Trung Binh: " << dtb;
		}
		else if (dtb >= 5 && dtb < 8)
		{
			cout << "Hoc luc: Kha\n";
			cout << "Diem Trung Binh: " << dtb;
		}
		else
		{
			cout << "Hoc luc: Yeu\n";
			cout << "Diem Trung Binh: " << dtb;
		}
	}
};
void nhapdiem(int a[])
{
	for (int i = 0; i < 8; i++)
	{
		cout << "Mon thu " << i+1 << " = ";
		cin >> a[i];
	}
}

int main()
{
	student *hs1 = new student("Tong Phuoc Thinh", "Viet Nam", 18);
	student* hs2 = new student;
	int a[8];
	hs1->introduce();
	nhapdiem(a);
	for (int i = 0; i < 8; i++) 
	{
		hs1->diem[i] = a[i];
	}
	hs1->xuatdiem();
	hs1->dtb();
	delete hs1;
	return 0;
}