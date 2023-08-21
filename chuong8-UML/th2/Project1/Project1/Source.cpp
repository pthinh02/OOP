#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Frame;
class Event;
class Window;
class DrawingContext;
class ConsoleWindow;
class DialogBox;
class Shape;
class Circle;
class Rectangle;
class Polygon;

class Frame
{

};
class Window : public Frame
{
public:
	void open()
	{

	}
	void close()
	{

	}
	void move()
	{

	}
	void display(DrawingContext* d)
	{

	}
	void handleEvent(Event* e)
	{

	}
private:
	vector <Shape*> sh;
};
class DrawingContext
{
public:
	void setPoint()
	{

	}
	void clearScreen()
	{

	}
	void getVerticalSize()
	{

	}
	void getHorizontalSize()
	{

	}
};
class ConsoleWindow : public Window
{

};
class DialogBox : public Window
{

};
class Shape
{
	virtual draw()
	{

	}
	virtual erase()
	{

	}
	virtual move()
	{

	}
	virtual resize()
	{

	}
};
class Circle : public Shape
{
public: 
	float area(float radius)
	{

	}
private:
	float radius;
	float center;

};
class Rectangle : public Shape
{

};
class Polygon : public Shape
{

};

int main()
{


	return 0;
}