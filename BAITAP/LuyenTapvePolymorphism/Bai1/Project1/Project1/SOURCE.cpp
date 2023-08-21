#include <iostream>
#include <string>
#include <vector>
#include "Book.h"
#include "SGK.h"
#include "Novel.h"
#include "Magazine.h"
#include "nhapSach.h"


using namespace std;



int main()
{
	Book* book = new Book("Giao Trinh", "Kim Dong", 2020, 67, 65.5);

	vector<SGK*> SGK_list;
	vector<Novel*>Novel_list;
	vector<Magazine*>Magazine_list;

	do
	{
		cout << "\t<1>.Sach Giao Khoa\n";
		cout << "\t<2>.Tieu Thuyet\n";
		cout << "\t<3>.Tap chi\n";
		cout << "\t<0>.Thoat\n";
		cout << "Chon loai sach: ";
		cin >> select;
		if (select == 1)
		{
			SGK* sgk = new SGK;
			getSGK(sgk);
			SGK_list.push_back(sgk);
		}
		else if (select == 2)
		{
			Novel* novel = new Novel;
			getNovel(novel);
			Novel_list.push_back(novel);
		}
		else if (select == 3)
		{
			Magazine* mgz = new Magazine;
			getMGZ(mgz);
			Magazine_list.push_back(mgz);
		}
	} while (select != 0);

	return 0;
}