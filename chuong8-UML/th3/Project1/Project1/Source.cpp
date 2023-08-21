#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Customer;
class Order;
class OrderDetail;
class Item;
class Payment;
class Cash;
class Check;
class Credit;

class Customer
{
private:
	string name;
	string address;
};
class Order
{
private:
	string date;
	string status;
public:
	void calcTotalPrice()
	{

	}

};
class OrderDetail
{
private: 
	int quantity;
public:
	void calcPrice()
	{

	}
};
class Payment
{
public:
	virtual float amount() = 0;
};
class Check : public Payment
{
private:
	string name;
	string bankID;
public:
	void authorized() 
	{
	}
};
class Credit : public Payment
{
private:
	string number;
	string type;
	string expiredDate;
public:
	void authorized()
	{
	}
};



















