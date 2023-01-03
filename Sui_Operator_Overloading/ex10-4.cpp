// [ Code ]: ex10-4.cpp -- Operator Overloading
#include <iostream>
#include <cstdlib>
#include "myint.hpp"
using namespace std;
int main(){
 MyInt m1(100),m2(49),m3;
 cout << " m1 = " << m1.get()
 << " m2 = " << m2.get() << endl;
 m3 = m1 * m2;
 cout << "\n\t m1*m2 = " << m3.get() << endl;
 m3 = m1.operator*(m2);
 cout << "m1.operator*(m2)= " << m3.get() << endl;

 m3 = m1 / m2;
 cout << "\n\t m1/m2 = " << m3.get() << endl;
 m3 = m1.operator/(m2);
 cout << "m1.operator/(m2)= " << m3.get() << endl;
 m3 = m3 * 10;
 cout << "\n\t m3*10 = " << m3.get() << endl;
 m3 = m3.operator*(10);
 cout << "m3.operator*(10)= " << m3.get() << endl;
 m3 = m3 / 10;
 cout << "\n\t m3/10 = " << m3.get() << endl;
 m3 = m3.operator/(10);
 cout << "m3.operator/(10)= " << m3.get() << endl;
 /*cout << "\n\t m4 = " << m4.get()
 << "\n\t -m4 = " << -m4.get() << endl;
 cout << "\n\t m4 = " << m4.get();
 cout << "\n\t ++m4 = " << (++m4).get();
 cout << "\n\t m4++ = " << (m4++).get();
 cout << "\n\t m4 = " << m4.get() << endl;
 cout << "\n\t m4 = " << m4.get();
 cout << "\n\t --m4 = " << (--m4).get();
 cout << "\n\t m4-- = " << (m4--).get();
 cout << "\n\t m4 = " << m4.get() << endl;
 */
 system("PAUSE");
 return 0;
}
