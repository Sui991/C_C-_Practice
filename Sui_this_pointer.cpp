//¸êºÞ¤G¥Ò C109118115 §E©Ó«Û
// Example 9-4: this Pointer 
// [ Code ] : p_this.cpp 
#include <iostream> 
using namespace std; 
class P_this { 
 int a; 
 public:
 P_this seta(int a){ 
 this->a = a; 
 return *this; 
} 
void print(){cout << a;} 
}; 
int main(){ 
 P_this pt1, pt2; 
 pt1 = pt2.seta(100); 
 pt1.print(); 
 return 0;
}