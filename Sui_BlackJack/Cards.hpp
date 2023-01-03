#ifndef CARDS.hpp
#define CARDS.HPP
#include <stdio.h>
 #include <stdlib.h>
 #include <iostream>
#include <cstdlib>
using namespace std;
class Cards{
private:
   int i, j; int max_dim, choice;
public:
    int rng(int *pokers);
     int min=1, max=312, num=6;
    int choose[312];
};
#endif



