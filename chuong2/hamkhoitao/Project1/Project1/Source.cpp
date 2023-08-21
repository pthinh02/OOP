#include <iostream>
#include <fstream>
#include <string>
using namespace std;


class woman {
public:
	static void what() {
		cout << "who is to be loved.\n";
	}

	string fullname;
	int age;
	void introduce()
	{
		cout << "Hello my name is : " << fullname << "\n";
		cout << age << " years old. \n";
	}
	woman()
	{
		fullname = "UNKNOWN";
		age = 0;
	}

	woman(string fn, int a)
	{
		fullname = fn;
		age = a;
	}
private:
	float weight;
};

int main() {
	
	woman* hariwon = new woman("Hariwon",35);
	woman* ngoctrinh = new woman();
	
	woman::what();

	return 0;
}