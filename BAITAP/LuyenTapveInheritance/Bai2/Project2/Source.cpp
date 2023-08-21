#include <iostream>
#include <string>
#include <vector>
using namespace std;

class People
{
protected:
	string fullName;
};
class Student : public People
{

};
class Pupil : public People
{

};
class Artist : public People
{

};
class Singer : public People
{

};

int main()
{


	return 0;
}