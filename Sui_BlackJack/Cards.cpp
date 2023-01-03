 #include <stdio.h>
 #include <iostream>
#include <cstdlib>
 #include <time.h>
#include "Cards.hpp"
using namespace std;

int Cards::rng(int *pokers){
max_dim = max - min + 1;
 for(i=0;i<max_dim;i++)
 {
 choose[i] = min + i;
 }
 srand((unsigned)time(NULL));
 for(i=0;i<max;i++)
 {
 choice = rand()%max_dim;
 pokers[i] = choose[choice];
 for(j=choice;j<max_dim;j++)
 {
 choose[j]=choose[j+1];
 }
 max_dim--;
 }
 return 0;
 };


