/******************************************************************************
************ Bài tập lập trình C++ OOP - Bài 8.1 *****************************
********************** vunguyencoder.com **************************************
Ve so do class diagram cua chuong trinh sau

*******************************************************************************/

#include <iostream>
#include <vector>
#include <string>

class Address
{
    std::string street;
    std::string city;
    std::string district;
    std::string postalCode;
    std::string country;
};

class Person
{
public:
    Person(std::string n, int a)
    {
        name = n;
        age = a;
    }

    bool hasParkingPass()
    {
        return true;
    }
protected:
    std::string name;
    int age;
    float phoneNumber;
    std::string email;
    Address address;
};

class Student : public Person
{
public:
    Student(std::string n, int a) : Person(n, a) {}
private:
    float studentID;
};

class Lecture
{
public:
    Lecture(std::string n)
    {
        name = n;
    }

    std::string getName()
    {
        return name;
    }

private:
    std::string name;
};

class Professor : public Person
{
public:
    Professor(std::string n, int a) : Person(n, a) {}

    void addStudent(Student* student)
    {
        studentList.push_back(student);
    }

    void train(Lecture* lecture)
    {
        std::cout << "The professior named " << name
            << "\nis teaching for " << studentList.size() << " students \nwith lecture: "
            << lecture->getName() << "\n";
    }

private:
    std::vector<Student*> studentList;
    float salary;
};

int main()
{
    Professor* tokuda = new Professor("Tokuda", 50);
    tokuda->addStudent(new Student("Vu", 30));
    tokuda->addStudent(new Student("Son", 25));
    tokuda->addStudent(new Student("Yen", 20));

    Lecture* lecture = new Lecture("Tinh ke thua trong OOP");

    tokuda->train(lecture);
}
