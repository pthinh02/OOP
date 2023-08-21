#include <iostream>
#include <string>
using namespace std;

class Mobile
{
public:
	void Start()
	{
		cout << "Mobile Phone starting!....\n";
	}
	void Call()
	{
		cout << "Calling girlfriend.\n";
	}
private:
	string brand;
	string model;
	float size;
	int insurance;
};

class iPhone : public Mobile
{
public: 
	void Airdrop()
	{
		cout << "Airdropping...\n";
	}
	void FaceID()
	{
		cout << "Recognizingggg....\n";
	}
	void openAppStore()
	{
		cout << "Opening AppStore...\n";
	}
private:

};

class Samsung : public Mobile
{
public:
	void Spen()
	{
		cout << "Using S-Pen...\n";
	}
	void openCHplay()
	{
		cout << "Opening CH-Play.\n";
	}
private:

};

int main()
{
	iPhone* dt = new iPhone;

	dt->Start();



	return 0;
}