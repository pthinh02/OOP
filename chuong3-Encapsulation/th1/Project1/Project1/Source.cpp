#include <iostream>
#include <string>
using namespace std;

struct datetime
{
	int ngay,thang,nam;
};

class benhnhan
{
public:
	benhnhan(string fn, int maso)
	{
		fullname = fn;
		id = maso;
	}
	void setname(string& fn)
	{
		fullname = fn;
	}
	void setid(int maso)
	{
		id = maso;
	}
	void setdate(int a, int b, int c)
	{
		ngaynhapvien.ngay = a;
		ngaynhapvien.thang = b;
		ngaynhapvien.nam = c;
	}
	void setbenh(string ill)
	{
		benh = ill;
	}
	void setmoney(float tien)
	{
		money = tien;
	}

	void showinfo()
	{
		cout << "=========BENH VIEN THANH PHO HO CHI MINH==========\n";
		cout << "Ten Benh Nhan: " << fullname<< endl;
		cout << "Ma So: " << id << endl;
		cout << "Ngay Nhap Vien: " << ngaynhapvien.ngay << "/" << ngaynhapvien.thang << "/" << ngaynhapvien.nam << endl;
		cout << "Benh: " << benh << endl;
		cout << "Tien vien phi: " << money << " $"<<endl;
		cout << "==================================================\n";
	}

private:
	int id;
	string fullname;
	datetime ngaynhapvien;
	string benh;
	float money;
};


int main()
{
	benhnhan* bn1 = new benhnhan("HeHe", 2203);

	bn1->setdate(15, 8, 2005);
	bn1->setbenh("De thuong");
	bn1->setmoney(14500.335);
	bn1->showinfo();
	return 0;
}