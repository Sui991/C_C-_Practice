#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    //C109118115 ��ޤG�� �E�ӫ�
 int i, j, k=100, jc;

printf("\n\n C109118115 ��ޤG�� �E�ӫ� *****  �q�l�˼ƭp�ɾ�! \n\n");

for(i = 0; i <100; i++)
 {
 printf("\r");
  k-=1;
  if (k<10){
 printf(" ");
  }
   printf("%d",k);
   jc = 1;
   while(1)
   {
   if(jc > 2100000000) break;
   jc++; // delay the printout ...
   }
   }
  printf("\n\n ***** Done! \n\n");
   system ("PAUSE");
   return 0;
 }

