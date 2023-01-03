#include <stdio.h>
#include <stdlib.h>
//資管二甲C109118115 余承彥
int main()
{
    int i, j,x, string_size=29 , jc;
    char a[] = {'h','e','l','l','o','w','o','r','l','d'};
char b[10];
printf("\n\n  *****  文字跑馬燈! \n\n");

for(i = 0; i<=string_size; i++)
 {
for(j=string_size-i;j>=0;j--)
  {

     printf(" ");

  }
     if(i<=9)
     {
        b[i]=a[i];
     }


 for(x=0; x<=9; x++)
{
    printf("%c",b[x]);
}
printf(" ");
printf("\r");
   jc = 1;
   while(1)
   {
   if(jc > 1000000000) break;
   jc++; // delay the printout ...
   }
}
  printf("\n\n ***** Done! \n\n");
   system ("PAUSE");
   return 0;
}
