#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

string s;
int e, a;
float m;

class Staff
{
public:
	string getFullName()
	{
		return fullName;
	}
	void setFullName(string fn)
	{
		fullName = fn;
	}
	int getExp()
	{
		return exp;
	}
	void setExp(int e)
	{
		exp = e;
	}
	float getMiniumWage()
	{
		return miniumWage;
	}
	void setMiniumWage(float m)
	{
		miniumWage = m;
	}
	virtual float showWage() = 0;
protected:
	string fullName;
	int exp;
	float miniumWage;
};
class HR : public Staff
{
public:
	float getHRwage()
	{
		return HRwage;
	}
	void setHRwage(float f)
	{
		HRwage = f;
	}
	float showWage() override
	{
		return getHRwage();
	}
private:
	float HRwage;
};
class Coder : public Staff
{
public:
	float getCoderwage()
	{
		return Coderwage;
	}
	void setCoderwage(float f)
	{
		Coderwage = f;
	}
	float showWage() override
	{
		return getCoderwage();
	}
private:
	float Coderwage;
};
class Saler : public Staff
{
public:
	float getSalerwage()
	{
		return Salerwage;
	}
	void setSalerwage(float f)
	{
		Salerwage = f;
	}
	int numOfContracts;
	float showWage() override
	{
		return getSalerwage();
	}
private:
	float Salerwage;

};

void getHR(HR* hr)
{
	cout << "================================================\n";
	cout << "NHAP VAO THONG TIN NHAN VIEN: \n";
	cout << "\tHo va Ten: ";
	cin.ignore();
	getline(cin, s);
	hr->setFullName(s);
	cout << "\tSo nam kinh nghiem: ";
	cin >> e;
	hr->setExp(e);
	cout << "\tMuc luong co ban: ";
	cin >> m;
	hr->setMiniumWage(m);
	hr->setHRwage(m);
	cout << "================================================\n";
}
void getCoder(Coder* cd)
{
	cout << "==========NHAP VAO THONG TIN NHAN VIEN==========\n";
	cout << "\tHo va Ten: ";
	cin.ignore();
	getline(cin, s);
	cd->setFullName(s);
	cout << "\tSo nam kinh nghiem: ";
	cin >> e;
	cd->setExp(e);
	cout << "\tMuc luong co ban: ";
	cin >> m;
	cd->setMiniumWage(m);
	cd->setCoderwage(m * 1.15);
	cout << "================================================\n";
}
void getSaler(Saler* sl)
{
	cout << "================================================\n";
	cout << "NHAP VAO THONG TIN NHAN VIEN: \n";
	cout << "\tHo va Ten: ";
	cin.ignore();
	getline(cin, s);
	sl->setFullName(s);
	cout << "\tSo nam kinh nghiem: ";
	cin >> e;
	sl->setExp(e);
	cout << "\tMuc luong co ban: ";
	cin >> m;
	sl->setMiniumWage(m);
	cout << "\tSo hop dong da Hoan Thanh: ";
	cin >> sl->numOfContracts;
	sl->setSalerwage(m + m * (sl->numOfContracts) / 100);
	cout << "================================================\n";
}


int main()
{
	vector<Staff*> list;
	int select1, select2,i;
	do
	{
		cout << "===================QUAN LY NHAN VIEN========================\n";
		cout << "<1>.Them Nhan Vien\n";
		cout << "<2>.Xoa Nhan Vien\n";
		cout << "<3>.Sua Nhan Vien\n";
		cout << "<4>.Xuat Thong tin\n";
		cout << "<0>.Thoat\n";
		cout << "============================================================\n";
		cout << "Nhap vao lua chon: ";
		cin >> select1;
		if (select1 == 1)
		{
			cout << "\t<1>.Human Resource.\n";
			cout << "\t<2>.Coder.\n";
			cout << "\t<3>.Saler.\n";
			cout << "Nhap vao lua chon:";
			cin >> select2;
			if (select2 == 1)
			{
				HR* hr1 = new HR;
				getHR(hr1);
				list.push_back(hr1);
			}
			else if (select2 == 2)
			{
				Coder* cd1 = new Coder;
				getCoder(cd1);
				list.push_back(cd1);
			}
			else if (select2 == 3)
			{
				Saler* sl1 = new Saler;
				getSaler(sl1);
				list.push_back(sl1);
			}
		}
		else if (select1 == 2)
		{
			if (list.size() == 0)
			{
				cout << "Khong co THONG TIN nhan vien.\n";
				break;
			}
			cout << "Nhap vao thu tu phan tu can XOA: ";
			cin >> i;
			list.erase(list.begin() + i);
			cout << "Da xoa phan tu.\n";
		}
		else if (select1 == 3)
		{

		}
		else if (select1 == 4)
		{
			cout << "+-----+--------------------+-------+-------+\n";
			cout << "|STT  |Ho ten              |Luong  | KN    |\n";
			cout << "+-----+--------------------+-------+-------+\n";
			if (list.size() == 0)
			{
				cout << "Khong co THONG TIN nhan vien.\n";
				break;
			}
			for (int i = 0; i < list.size(); i++)
			{
				cout << "|" << setw(5) << left << i + 1;
				cout << "|" << setw(20) << left << list[i]->getFullName();
				cout << "|" << setw(6) << left << list[i]->showWage()<<"$";
				cout << "|" << setw(7) << right << list[i]->getExp() << "|" << endl;
				cout << "+-----+--------------------+-------+-------+\n";
			}
		}

	} while (select1 != 0);

	return 0;
}