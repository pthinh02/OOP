#include <iostream>
#include <string>
using namespace std;



class woman {
public:

	string introduce(string language, bool isFull = true)
	{
		string msg;
		if (language == "Vietnam")
		{
			msg = "Xin chao toi la Phu nu.\n";
			if (isFull)
			{
				msg += "Toi xinh dep.\n";
			}
		}
		else
		{
			msg = "Hi I'am woman.\n";
			if (isFull)
			{
				msg += "I'm very beautiful.\n";
			}
		}
		return msg;
	}
	woman(string fn, int a, float w) {
		fullname = fn;
		age = a;
		weight = w;
	}
	float getWeight()
	{
		return weight;
	}
	float getHeight()
	{
		return height;
	}

private:
	int age;
	string fullname;
	float height;
	float weight;
	int bloodPressure;
	int heartBeat;

};

class heathChecker
{
public:
	void check(woman* woman)
	{
		weight = woman->getWeight();
		height = woman->getHeight();
		bloodPressure = 130;
		heartBeat = 80;
	}


private:
	float height;
	float weight;
	int bloodPressure;
	int heartBeat;

};


int main()
{
	woman* hariwon = new woman("Hariwon", 35, 46.5);


	return 0;
}