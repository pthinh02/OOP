#include <iostream>
#include <string>
#include <vector>
using namespace std;

typedef struct birthday
{
	int ngay;
	int thang;
	int nam;
};

class Staff
{
public:
	void setName(string fn)
	{
		name = fn;
	}
	string getName()
	{
		return name;
	}
	void setBirthday(int a, int b, int c)
	{
		bd.ngay = a ;
		bd.thang = b;
		bd.nam = c;
	}
	birthday getBirthday()
	{
		cout << bd.ngay << "/" << bd.thang << "/" << bd.nam;
	}	  //cout
	void setMiniumWage(float a)
	{
		miniumWage = a;
	}
	float getMiniumWage()
	{
		return miniumWage;
	}
private:
	string name;
	birthday bd;
	float miniumWage;
};
class Producer : public Staff
{
public:
	float producerWage()
	{
		return (this->getMiniumWage() + things * 5000);
	}
private:
	int things;
};
class Clerk : public Staff
{
public:
	float clerkWage()
	{
		return workingDays * 100000;
	}
private:
	int workingDays;
};

int main()
{


	return 0;
}
