#include <iostream>
#include <cstdlib>
#include <ctype.h>
#include <conio.h>
#include "bubblesort.hpp"
int main(void)
{
 int choose[6];
 char ch;
do
 {
 BubbleSort num_lotto(choose);
 num_lotto.sorting(choose);
 cout << "\n\n other¡H(y/n)¡G";
 ch = getche();
 ch = toupper(ch);
 }while(ch=='Y');
 cout << "\n\n";
 system("PAUSE");
 return 0;
}
