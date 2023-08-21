/******************************************************************************
************ Bài tập lập trình C++ OOP - Bài 7.1 ******************************
********************** vunguyencoder.com **************************************

*******************************************************************************/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Vehicle
{
public:
    virtual void run() = 0;
};

class Car : public Vehicle
{
public:
    void run() override
    {
        cout << "A CAR is runninggg!\n";
    }
};

class Pickup : public Vehicle
{
public:
    void run() override
    {
        cout << "A PICKUP is runninggg!\n";
    }
};

class Motorbike : public Vehicle
{
public:
    void run() override
    {
        cout << "A MOTORBIKE is runninggg!\n";
    }
};

class Skateboard : public Vehicle
{
public:
    void run() override
    {
        cout << "A SKATEBOARD is runninggg!\n";
    }
};

class Person
{
public:
    void drive()
    {
        
    }
private:
};

void solution(Person* person, std::vector<Vehicle*> vehicleList, int numOfDays)
{
    for (int i = 0; i < numOfDays; i++)
    {
        if (i >= vehicleList.size())
        {
            cout << "Day " << i + 1 << " : ";
            vehicleList[i - vehicleList.size()]->run();
        }
        else
        {
            cout << "Day " << i + 1 << " : ";
            vehicleList[i]->run();
        }
    }
}

int main()
{
    std::vector<Vehicle*> vehicleList;
    vehicleList.push_back(new Car());
    vehicleList.push_back(new Motorbike());
    vehicleList.push_back(new Pickup());
    Person* person = new Person;

    int numOfDays = 0;
    std::cout << "Enter number of days using vehicles: ";
    std::cin >> numOfDays;
    solution(person, vehicleList, numOfDays);

    std::cout << "\nAfter adding Skateboard vehicle:\n";
    vehicleList.push_back(new Skateboard());
    solution(person, vehicleList, numOfDays);
}
