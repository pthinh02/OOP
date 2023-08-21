/******************************************************************************
************ Bài tập lập trình C++ OOP - Bài 2.1 ******************************
********************** vunguyencoder.com **************************************
*******************************************************************************/
#include <iostream>
#include <vector>

const int numOfSubject = 8;
std::string subjectName[numOfSubject] = { "Toan", "Ly", "Hoa", "Van", "Anh", "Sinh", "Su", "Dia" };

class Student
{
public:
	int id, age;
	std::string name, country;
	float height, weight;
	std::vector<float> scores;

	Student(int i, int a, std::string n, std::string c, float h, float w, std::vector<float> s)
	{
		id = i;
		age = a;
		name = n;
		country = c;
		height = h;
		weight = w;
		for (int i = 0; i < s.size(); i++)
		{
			scores.push_back(s[i]);
		}
		int numOfMissingSubject = numOfSubject - s.size();
		for (int i = 0; i < numOfMissingSubject; i++)
		{
			scores.push_back(0);
		}
	}

	void introduce()
	{
		std::cout << "My name is  " << name << "\nI am " << age << " years old.\nI was born in " << country << " province.\n";
	}

	void showScoreboard()
	{
		for (int i = 0; i < numOfSubject; i++)
		{
			std::cout << subjectName[i] << ": " << scores[i] << "\n";
		}
	}

	float average_score()
	{
		float sum = 0;
		for (int i = 0; i < numOfSubject; i++)
		{
			sum += scores[i];
		}
		return sum / 8;
	}

	void showRank()
	{
		float ave = average_score();
		if (ave >= 8.0)
		{
			std::cout << "Hoc luc gioi \n";
		}
		else if (ave >= 5 && ave < 8)
		{
			std::cout << "Hoc luc kha \n";
		}
		else
		{
			std::cout << "Hoc luc trung binh \n";
		}
	}
};

class Class
{
public:
	static int count;

	std::string id;
	std::vector<Student*> studentList;
	Student* monitor;

	Class(std::string i)
	{
		id = i;
		monitor = NULL;
		count++;
	}

	void addStudent(Student* student)
	{
		studentList.push_back(student);
	}

	void removeStudentByID(int id)
	{
		int i = 0;
		for (; i < studentList.size(); i++)
		{
			if (studentList[i]->id == id)
			{
				break;
			}
		}
		studentList.erase(studentList.begin() + i);
	}
};

int Class::count = 0;

int main()
{
	// Cau 2.1 
	std::cout << "Cau 2.1:\n";
	Student* anquang = new Student(7359, 25, "An Quang", "Thai Nguyen", 1.72, 64.35,
		{ 8.5, 8.2, 3.6, 7.6, 9.4, 2.9, 8.1, 7.8 });
	anquang->introduce();
	anquang->showScoreboard();
	anquang->showRank();

	// Cau 2.2 
	std::cout << "Cau 2.2:\n";
	Class* class9A1 = new Class("9A1");
	class9A1->addStudent(anquang);
	class9A1->addStudent(new Student(7360, 26, "Thuy Ngan", "Ha Noi", 1.70, 65,
		{ 8.6, 8.3, 8, 7.6, 9.4, 9, 8.1, 7.8 }));
	class9A1->addStudent(new Student(7361, 26, "Tuong Vi", "Ha Noi", 1.70, 65,
		{ 9, 8.3, 8, 7.6, 9.4, 9, 8.1, 7.8 }));

	// Show all student 
	class9A1->removeStudentByID(7359);
	for (int i = 0; i < class9A1->studentList.size(); i++)
	{
		std::cout << class9A1->studentList[i]->name << "\n";
	}
	return 0;
}