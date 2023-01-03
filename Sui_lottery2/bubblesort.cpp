//C109118115 余承彥 資管二甲
// [ Code ] : bubblesort.cpp — 定義 BubbleSort's member functions
#include <cstdlib>
#include <iostream>
#include <time.h>
#include "bubblesort.hpp"
using namespace std;
// 初始化 Lottery 的物件 game : mini=1, maxi=49, num=6, ch(位址);
BubbleSort::BubbleSort(int* ch):game(1,49,6,ch)
{
 for(int i=0; i<6; i++) *(ch+i)=0;
}
int BubbleSort::sorting(int* ch){
 int i, j, temp;
 int* choose = ch;
 game.lotto(); // 產⽣⼀組 6 個隨機樂透彩號碼
 for(j=6; j>1; j--) /* 氣泡排序6個號碼*/
 {
 for(i=0; i<j-1; i++)
 if( choose[i+1] < choose[i] ) {
 temp = choose[i+1];
 choose[i+1] = choose[i];
 choose[i] = temp;
 }
 }
 cout << "\n\n ==>";
 for(i=0; i<6; i++) /* 印出氣泡排序後的6個樂透彩號碼 */
 {
 cout << "\t" << choose[i];
 }
}
