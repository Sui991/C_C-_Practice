// [ Code ] : lottery.hpp �X �w�q Lottery class
// (#ifndef �K �K #endif)�קK�b runtime �ɡA���Ʀb��L���Y�ɩw�q�����O
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
