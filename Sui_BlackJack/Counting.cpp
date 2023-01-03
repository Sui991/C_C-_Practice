 #include <stdio.h>
 #include <stdlib.h>
 #include <iostream>
#include <cstdlib>
#include "Cards.hpp"
#include "Counting.hpp"
using namespace std;

int Counting::CoutingCard(int*pokers,int* counts,int* Points){
    for(i=0; i<max_number; i++)
 {
t[i]=pokers[i]%13;
 }
     for(i=0; i<max_number; i++)
 {
     if(t[i]>=1 && t[i]<=5){
             sum = sum + 1;
            Points[i]= 1;}
     else if(t[i]>=6 && t[i]<=8){
         Points[i]= 0;}
     else {
         sum -=1;
         Points[i]= -1;}
 counts[i] = sum;
 }
cout<<endl<<endl;
 return 0;
 };






