
//¸êºÞ¤G¥Ò C109118115 §E©Ó«Û
#include <iostream>
#include <cstdlib>
using namespace std;
class Point {
	public: 
	virtual void draw() =0;
};

class Square:public Point {
 	public:
 	virtual void draw() { cout <<"draw a square.\n"; }
};

class Cube:public Square {
 	public:
	virtual void draw() { cout <<"draw a cube.\n"; }
};
int main()
{
	
	Square square;
	Cube cube;
	Point *p;	
	p = &square;
	p->draw();
	p = &cube;
	p->draw();

	system("pause");
	return 0;
}
