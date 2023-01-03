#ifndef DISPLAY.HPP
#define DISPLAY.HPP
#include <string>
#include "Counting.hpp"
using namespace std;
class Display{
private:
    int Category1 = 0;int Category2 = 0;int Category3 = 0;
int Num=312;
public:
    int cardo(int *pokers,int* counts,int* Points);
    string  pokers_suit[53] = {"ClubA","Club2","Club3","Club4","Club5","Club6","Club7","Club8","Club9","Club10","ClubJ","ClubQ","ClubK",
                            "DiaA","Dia2","Dia3","Dia4","Dia5","Dia6","Dia7","Dia8","Dia9","Dia10","DiaJ","DiaQ","DiaK",
                            "HeartA","Heart2","Heart3","Heart4","Heart5","Heart6","Heart7","Heart8","Heart9","Heart10","HeartJ","HeartQ","HeartK",
                            "SpadeA","Spade2","Spade3","Spade4","Spade5","Spade6","Spade7","Spade8","Spade9","Spade10","SpadeJ","SpadeQ","SpadeK"
                           };
};
#endif
