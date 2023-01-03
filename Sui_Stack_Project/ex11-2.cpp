// [ Code ]: ex11-2.cpp
#include <iostream>


#include "stack.cpp"
using namespace std;
int main()
{
 typedef Stack <float> FloatStack;
 typedef Stack <int> IntStack;
 FloatStack fs(5);
 float f = 1.1;
 cout << "Pushing elements onto fs" << endl;
 while(fs.push(f)) {
 cout << f << ' ';
 f += 1.1;
 }
 cout << endl << "Stack Full." << endl << endl
 << "Popping elements from fs" << endl;

 while(fs.pop(f)) cout << f << ' ';
 cout << endl << "Stack Empty" << endl << endl;

 IntStack is;
 int i = 1.1;
 cout << "Pushing elements onto fs" << endl;
 while(is.push(i)) {
 cout << i << ' ';
 i += 1.1;
 }
 cout << endl << "Stack Full." << endl << endl
 << "Popping elements from fs" << endl;
 while(is.pop(i)) cout << i << ' ';
 cout << endl << "Stack Empty" << endl;
 return 0;
}
