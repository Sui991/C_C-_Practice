#include <iostream>

char a[100];
using namespace std;
int main()
{
    int i=0,j,c;
    printf("��J�@�ӤQ�i��P�Q�ഫ�����i��(2or8or16):");
    scanf ("%d %d",&j,&c);
    while (j!=0)
    {
          i++;
             a[i]=j%c;
          j=j/c;
          if (a[i]>9) a[i]='A'+(a[i]-10);
          else a[i]=a[i]+'0';
    }
    for (int h=i;h>0;h--)
    printf ("%c",a[h]);
    return 0;
}
