#include<iostream>
#include<string>
#include <vector>
#include <iomanip>
using namespace std;

int n;
string s;
int a, b, c;
float p;

typedef struct dayTour
{
	int day;
	int month;
	int year;
};

class ticket
{
public:
	string getNameTour()
	{
		return nameTour;
	}
	void getDayTour()
	{
		cout << dayTour.day << " / " << dayTour.month << " / " << dayTour.year << endl;
	}
	float getPrice()
	{
		return price;
	}
	void setNameTour(string s)
	{
		nameTour = s;
	}
	void setPrice(float f)
	{
		price = f;
	}
	void setDayTour(int a, int b , int c)
	{
		dayTour.day = a;
		dayTour.month = b;
		dayTour.year = c;
	}

private:
	string nameTour;
	dayTour dayTour;
	float price;
};

class human
{
public:
	string getFullName()
	{
		return fullname;
	}
	string getSex()
	{
		return sex;
	}
	int getAge()
	{
		return age;
	}
	void setFullName(string fn)
	{
		fullname = fn;
	}
	void setSex(string sx)
	{
		sex=sx;
	}
	void setAge(int a)
	{
		age = a;
	}

protected:
	string fullname;
	string sex;			//Male or Female
	int age;
};

class passenger : public human, public ticket
{
public:
	int getQuantity()
	{
		return quantity;
	}
	void setTicket(ticket tk)
	{
		ticket = tk;
	}
	void setQuantity(int q)
	{
		quantity = q;
	}

private:
	ticket ticket;
	int quantity;
};
void getTicket(passenger* ps)
{
	cout << "Moi nhap vao Ten chuyen di: ";
	getline(cin, s);
	ps->setNameTour(s);
	cout << "Moi nhap vao NGAY: ";
	cin >> a;
	cout << "Moi nhap vao THANG: ";
	cin >> b;
	cout << "Moi nhap vao NAM: ";
	cin >> c;
	ps->setDayTour(a, b, c);
	cout << "Gia ve: ";
	cin >> p;
	ps->setPrice(p);
}
void getHuman(passenger* ps)
{
	cin.ignore();
	cout << "Nhap vao TEN hanh khach: ";
	getline(cin, s);
	ps->setFullName(s);
	cout << "Gioi tinh: ";
	getline(cin, s);
	ps->setSex(s);
	cout << "Nhap so Tuoi: ";
	cin >> a;
	ps->setAge(a);
}


int main()
{
	vector <passenger*> passengerList;
	cout << "==============QUAN LY HOAT DONG BAY=============\n";
	cout << "<0>. Thoat Chuong Trinh.\n";
	cout << "<1>. Them Hanh khach\n";
	cout << "<2>. In du lieu\n";
	cout << "<3>. Xoa Hanh Khach\n";
	cout << "================================================\n";
	do {
		cout << "Moi chon noi dung: ";
		cin >> n;
		if (n == 1)
		{
			cin.ignore();
			passenger* ps = new passenger;
			getTicket(ps);
			getHuman(ps);
			cout << "Nhap vao so luong ve: ";
			cin >> a;
			ps->setQuantity(a);
			passengerList.push_back(ps);
			cout << "===========================================\n";
		}
		else if (n == 2)
		{
		
				cout << "+-----+--------------------+-------+-------+---------------+\n";
				cout << "|STT  |Ho ten              |Tuoi   | GT    |Tien phai tra  |\n";
				cout << "+-----+--------------------+-------+-------+---------------+\n";
				if (passengerList.size() == 0)
				{
					cout << "Khong co THONG TIN hanh khach.\n";
					break;
				}
				for (int i = 0; i < passengerList.size(); i++)
				{
					cout << "|" << setw(5) << left<< i+1;
					cout << "|" << setw(20) << left << passengerList[i]->getFullName();
					cout << "|" << setw(7) << left << passengerList[i]->getAge();
					cout << "|" << setw(7) << left << passengerList[i]->getSex();
					cout << "|" << setw(15) << left << passengerList[i]->getPrice()* passengerList[i]->getQuantity() << "|" << endl;
					cout << "+-----+--------------------+-------+-------+---------------+\n";
				}
		}
		else if (n == 3)
		{
			cout << "Nhap vao thu tu Khach can XOA: ";
			int z;
			cin >> z;
			passengerList.erase(passengerList.begin() + z);
		}
	} while (n != 0);
	return 0;
}

