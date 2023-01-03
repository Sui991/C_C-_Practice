// [ Code ]: myint.hpp
#ifndef MYINT_HPP
#define MYINT_HPP
class MyInt{
private:
 int myi;
public:
 MyInt (const int=0); // default constructor
 MyInt operator * (int);
 MyInt operator * (const MyInt &);
 MyInt operator /(int);
 MyInt operator / (const MyInt &);
 //MyInt operator / ();
 /*MyInt operator ++ ();
 MyInt operator ++ (int);
 MyInt operator -- ();
 MyInt operator -- (int);
 */
 int get() const;
 void set(int);
 ~MyInt(){}
};
#endif // MYINT_HPP
