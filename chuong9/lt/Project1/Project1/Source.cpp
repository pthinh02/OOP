#include <iostream>
#include <string>

using namespace std;	

class Person 
{

};


class Vehicle
{
public:
	Vehicle(string name)
		: modelName(name)
	{

	}
	Vehicle(Vehicle &othervehicle)
	{
		cout << "Clone Vehicle created.!" << endl;
	}
	virtual void run()
	{
		cout << this->modelName <<" is running.!";
	}

protected:
	string modelName;
};



int main()
{
	Vehicle* vehicle1 = new Vehicle("Mercedes");
	Vehicle* vehicle2 = new Vehicle(*vehicle1);
	vehicle1->run();


	return 0;
}