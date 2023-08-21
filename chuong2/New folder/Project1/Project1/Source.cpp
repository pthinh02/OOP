#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class message {
public:
	string content;
	string sender;
};


class woman {
public:
	string fullname;
	float weigh;
	void makeUp() 
	{


	}
	message *introduce( string language, bool isFull = true)
	{
		message *msg= new message;
		if (language == "Vietnam")
		{
			msg->content= "Xin chao toi la Phu nu.\n";
			if (isFull)
			{
				msg->content+= "Toi xinh dep.\n";
			}
		}
		else
		{
			msg->content = "Hi I'am woman.\n";
			if (isFull)
			{
				msg->content += "I'm very beautiful.\n";
			}
		}
		return msg;
	}
	message* introduce(int count)
	{
		message* msg = new message;
		for (int i = 0; i <count; i++)
		{
			msg->content+= "hello " + to_string(i) + " \n";
		}
		return msg;
	}
private:
	int age;
};

int main() {
	woman ngoctrinh;				//Du lieu trong bo nho STACK
	woman* hariwon = new woman;		//Du lieu trong bo nho HEAP  //UU TIEN

	hariwon->fullname = "Hariwon.";
	message *msg = hariwon->introduce(3);
	cout << msg->content;
	return 0;
}