 #include <stdio.h>
 #include <stdlib.h>
 #include <iostream>
#include <cstdlib>
#include "Counting.hpp"
#include "Cards.hpp"
#include "Display.hpp"
#include <string>
// C109118115 §E©Ó«Û ¸êºÞ¤G¥Ò
using namespace std;

int main(void)
 {
     int num=312;
     int Points[num];int pokers[num];int counts[num];
       Display dp;Cards card; Counting cou;
      card.rng(pokers);
      cou.CoutingCard(pokers,counts,Points);
        cout << endl<<"Poker\t" << "Points"<<"\t" << "Counts"<<"\t"<< "Category 1"<<"\t" << "Category 2"<<"\t" <<"Category 3"<<"\t" << endl;
      dp.cardo(pokers,counts,Points);
cout << endl<<endl;
 system("PAUSE");
 return 0;
 }


