#include <iostream>
#include<string>
#include <vector>
using namespace std;

string nameofSubjects[3] = { "Toan: ", "Van: ", "Anh: " };

struct birthday
{
	int day, month, year;
}; 

class Candidate
{
public: 
	Candidate(string fn, int id1)
	{
		cout << "======================================\n";
		cout << "Nhap vao ngay sinh: ";
		cin >> bd.day;
		cout << "Nhap vao thang sinh: ";
		cin >> bd.month;
		cout << "Nhap vao nam sinh: ";
		cin >> bd.year;
		name = fn;
		id = id1;
		for (int i = 0; i < 3; i++)
		{
			cout << "nhap vao diem mon " << nameofSubjects[i] << " :";
			cin >> diem[i];
		}
		cout << "=======================================\n";
	}
private:
	int id;
	string name;
	birthday bd;
	float diem[3];
};

class TestCandidate
{
public:
	

private:

};


int main()
{
	int n;
	cout << "Nhap vao so luong Thi sinh: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		
	}
	Candidate* ts1 = new Candidate("Tong Phuoc Thinh", 20);

	return 0;
}