#include <iostream>
#include <string>

using namespace std;				//PRIVATE khong duoc thua ke boi Derived Class ====> PROTECTED

class Vehicle
{
public:
	string getModelName()
	{
		return modelName;
	}

	void setModelName(string name)
	{
		modelName = name;
	}

	int getVersion()
	{
		return version;
	}

	void setModelName(int v)
	{
		version = v;
	}
protected:
	void run()
	{
		cout << "This vehicle is running.!";
	}
private:
	
	string modelName;
	int version;
};

class Taxi : public Vehicle
{
public: 
	void run()
	{
		Vehicle::run();
		cout << "\nIt's a taxi.";
	}

	
private:
	
};

int main()
{
	Vehicle* vehicle = new Vehicle;
	Taxi* taxi = new Taxi;

	taxi->setModelName("Toyota Innova");
	cout << taxi->getModelName()<< endl	;
	
	taxi->run();

	return 0;
}