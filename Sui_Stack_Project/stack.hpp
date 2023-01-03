
//¸êºÞ¤G¥Ò §E©Ó«Û C109118115
// [ Code ]: stack.h

template <class T>
class Stack
{
 public:
 Stack(int = 10);
 ~Stack(){ delete [] stackPtr; }
 int push(const T&);
 int pop(T&); // pop an element off the stack
 int isEmpty() const { return top == -1; }
 int isFull() const { return top == size - 1;}
 private:
 int size; // Number of elements on Stack
 int top;
 T* stackPtr;
};
