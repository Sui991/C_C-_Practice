// [ Code ] : lottery.cpp — 定義 Lottery's member functions
#include <cstdlib>
#include <iostream>
#include <time.h>
#include "Lottery.hpp"
using namespace std;
Lottery::Lottery(int min_num, int max_num, int number, int* ch){
 mini = min_num;
 maxi = max_num;
 num = number;
 choose = ch;
}
int Lottery::lotto(){
 int max_dim = maxi - mini + 1; // 初始設定號碼範圍：在1~49間
 int i, j, choice;
 int lot[max_dim];
 for(i=0;i<max_dim;i++)
 {
 lot[i] = mini + i;
 }
 srand((unsigned)time(NULL)); /*亂數種⼦產⽣器*/
 for(i=0;i<num;i++)
 {
 choice = rand()%max_dim; // 在1~49間：隨機選取號碼
 *(choose+i) = lot[choice];
 for(j=choice;j<max_dim;j++)
 {
 lot[j]=lot[j+1]; // 剔除已經選中的號碼
 }
 max_dim--;
 }
 cout << "\n\n ##################################### \n";
 cout << "\n (1~49):\n" << endl;
 for(i=0; i<6; i++) /* 印出樂透彩6個號碼 */
 { cout << "\t" << choose[i]; }
 return 0;
}
