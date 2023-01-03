#include "stack.hpp"
// [ Code ]: stack.cpp
template <class T>
Stack<T>::Stack(int s)
{ /* constructor with the default size 10 */
 size = s > 0 && s < 1000 ? s : 10;
 top = -1; // initialize stack
 stackPtr = new T[size];
}
template <class T>
int Stack<T>::push(const T& item)
{ /* push an element onto the Stack */
 if(!isFull()) {
 stackPtr[++top] = item;
 return 1; // push successfully
 }
 return 0; // push unsuccessfully
}
template <class T>
int Stack<T>::pop(T& popValue)
{ /* pop an element off the Stack */
 if(!isEmpty()) {
 popValue = stackPtr[top--];
 return 1; // pop successfully
 }
 return 0; // pop unsuccessfully
}
