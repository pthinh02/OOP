#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Vehicle
{
public:
	Vehicle()
	{
		cout << "Created a Vehicle.!\n";
	}
	string getModelName()
	{
		return modelName;
	}
	void setModelName(string fn)
	{
		modelName = fn;
	}
	virtual void run()
	{
		cout << "A vehicle is running...\n";
	}
private:
	string modelName;
};

class Car : public Vehicle
{
public:
	Car()
	{
		cout << "Created a Car.!\n";
	}
	void run() override
	{
		cout << "A car is running...\n";
	}
private:

};
class Truck : public Vehicle
{
public:
	Truck()
	{
		cout << "Created a Truck.!\n";
	}
	void run() override
	{
		cout << "A Truck is running...\n";
	}
private:

};
class Motorbike : public Vehicle
{
public:
	Motorbike()
	{
		cout << "Created a Motorbike.!\n";
	}
	void run() override
	{
		cout << "A Motorbike is running...\n";
	}
private:

};

int main()
{
	Vehicle* car = new Car;
	Vehicle* truck = new Truck;
	Vehicle* motorbike = new Motorbike;

	Vehicle* vehicle_list[3];
	vehicle_list[0] = car;
	vehicle_list[1] = truck;
	vehicle_list[2] = motorbike;

	for (int i = 0; i < 3; i++)
	{
		vehicle_list[i]->run();
	}


	return 0;
}