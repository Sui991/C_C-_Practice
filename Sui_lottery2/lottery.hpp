// [ Code ] : lottery.hpp — 定義 Lottery class
// (#ifndef … … #endif)避免在 runtime 時，重複在其他標頭檔定義該類別
#ifndef LOTTERY_HPP
#define LOTTERY_HPP
#include <cstdlib>
using namespace std;
class Lottery{
private:
 int mini, maxi, num;
 int* choose;
public:
 Lottery(int min_num, int max_num, int number, int* ch);
 int lotto();
};
#endif
