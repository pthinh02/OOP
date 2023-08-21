#include <iostream>
#include <string>
using namespace std;


class Checker
{

};
class Vehicle
{
public:
	virtual void run()=0
private:
	string modelName;
};
class Engine 
{

};
class Car
{
public: 
	Car()
	{

	}
	void run() override
	{

	}
private: 
	string ownerName;
};
class Person
{
public:
	void setVehicle(Vehicle* v)
	{

	}
private:
	Vehicle* vehicle;
	string name;
};


int main()
{
	Vehicle* vehicle = new Vehicle;
	Person* person = new Person;


	return 0;
}