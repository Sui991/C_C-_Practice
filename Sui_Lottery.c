#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
 #include <stdlib.h>
 #include <ctype.h>
 #include <conio.h>
 #include <time.h
 // 資管二甲 C109118115 余承彥
 int main(void)
 {
 int min=1, max=49, num=6;
 int lot[max];
 int choose[num];

 int max_dim, choice;
 int i, j, temp;
 char ch;
 do
 {
 max_dim = max - min + 1; // 初始設定號碼範圍：在1~49間
 for(i=0;i<max_dim;i++)
 {
 lot[i] = min + i;
 }
 srand((unsigned)time(NULL)); /*亂數種⼦產⽣器*/
 for(i=0;i<num;i++)
 {
 choice = rand()%max_dim; // 在1~49間：隨機選取號碼
 choose[i] = lot[choice];
 for(j=choice;j<max_dim;j++)
 {
 lot[j]=lot[j+1]; // 剔除已經選中的號碼
 }
 max_dim--;
 }
 printf("\n\n ######################################");
 printf("\n\n (1-49) :\n\n");
 for(i=0; i<6; i++) /* 印出樂透彩6個號碼 */
 { printf("\t%d", choose[i]); }
 for(j=6; j>1; j--) /* 氣泡排序6個號碼*/
 {
 for(i=0; i<j-1; i++)
 if( choose[i+1] < choose[i] ) {
 temp = choose[i+1];
 choose[i+1] = choose[i];
 choose[i] = temp;
 }
 }
 printf("\n\n ==>");
 for(i=0; i<6; i++) /* 印出氣泡排序後的6個樂透彩號碼 */
 {
 printf("\t%d", choose[i]);
 }
 printf("\n\n other (y/n):");
 ch = getche();
 ch = toupper(ch);
 }while(ch=='Y');
 printf("\n\n");
 system("PAUSE");
 return 0;
 }
