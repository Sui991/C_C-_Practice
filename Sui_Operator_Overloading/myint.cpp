
// [ Code ]: myint.cpp
#include "myint.hpp"
MyInt::MyInt(const int i): myi(i){}
// return MyInt(myi+i); µ¥¦P©ó MyInt obj(myi+i); return obj;
MyInt MyInt::operator * (int i){ return MyInt(myi*i); }
MyInt MyInt::operator * (const MyInt & pInt)
 { return MyInt(myi*pInt.myi); }
MyInt MyInt::operator / (int i){ return MyInt(myi/i); }
MyInt MyInt::operator / (const MyInt & pInt)
 { return MyInt(myi/pInt.myi); }
//MyInt MyInt::operator - (){ return MyInt(-myi); }
/*MyInt MyInt::operator ++ (){ return MyInt(++myi); } // ++prefix
MyInt MyInt::operator ++ (int){return MyInt(myi++);} // postfix++
MyInt MyInt::operator -- (){ return MyInt(--myi); } // --prefix
MyInt MyInt::operator -- (int){return MyInt(myi--);} // postfix-- */
int MyInt::get() const { return myi; }
void MyInt::set(int i) { myi = i; }
