#include <iostream>
#include <string>
#include <cstring>
#include "Display.hpp"
#include "Counting.hpp"

using namespace std;
Display::cardo(int *pokers,int* counts,int* Points){
 for(int i = 0; i < Num; i++){
        if(Points[i]==1){
        Category1+=1;};
        if(Points[i]==0){
            Category2+=1;};
        if(Points[i]==-1){
            Category3+=1;};
        cout << pokers_suit[pokers[i] % 52] <<"\t "<< showpos<< Points[i]<<" \t " <<  counts[i]<<"\t " << noshowpos<< Category1<<"cards " <<"\t"<<   Category2<<"cards      "<<"\t"<< Category3<<"cards" <<"\t"<< " \r";
        int  jc = 1;
   while(1)
  {
   if(jc > 1500000000) break;
   jc++; // delay the printout ...
   }
    }

};
