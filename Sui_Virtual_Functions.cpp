// Example 9-1: Virtual Function
// [ Code ] : virtfunc.cpp
//資管二甲 C109118115 余承彥 
#include <iostream>
#include <cstdlib>
using namespace std;
class Bird {
	public: // 將 move() 宣告為虛擬函式
	virtual void move() { cout <<"Bird can fly.\n"; }
};

class Goose:public Bird {
 	public:
 	void move() { cout <<"Goose can fly, run and swim.\n"; }
};

class Penguin:public Bird {
 	public:
	void move() { cout <<"Penguin can run and swim.\n"; } 
};
int main() 
{
	Bird bird;
	Goose goose;
	Penguin penguin;
	Bird *p;
	p = &bird;
	p->move();
	p = &goose;
	p->move();
	p = &penguin;
	p->move();

	system("pause");
	return 0;
}
