// [ Code ] : bubblesort.hpp — 氣泡排序6個號碼
// (#ifndef … … #endif)避免在 runtime 時，重複在其他標頭檔定義該類別
#ifndef BUBBLESORT_HPP
#define BUBBLESORT_HPP
#include <cstdlib>
#include "lottery.hpp"
using namespace std;
class BubbleSort{
private:
 int* choose;
 Lottery game; // 宣告⼀個類別 Lottery 的物件 game
public:
 BubbleSort(int*); // 預設建構⼦: 在此做為初始化之⽤
 int sorting(int*);
};
#endif

