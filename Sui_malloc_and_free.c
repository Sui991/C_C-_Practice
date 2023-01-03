#include <stdio.h>
#include <stdlib.h>
//資管二甲C109118115 余承彥
int main()
{

 int i,n,z;
long int *id;
 int *chi,*eng,*pro,*avg,*c;
 printf("Enter numbers of student:");
 scanf("%d",&n);
 id=malloc(sizeof(long int)*n); //動態記憶體配置
 chi=malloc(sizeof(int)*n); //動態記憶體配置
 eng=malloc(sizeof(int)*n); //動態記憶體配置
 pro=malloc(sizeof(int)*n); //動態記憶體配置
 avg=malloc(sizeof(int)*n); //動態記憶體配置
c=malloc(sizeof(int)*n);
 for (i=0;i<n;i++)
 {
 printf("Enter number%d of student score:\n",i+1);
 printf(" #ID：");
 scanf("%d",&id[i]);
 printf(" Chinese score:");
 scanf("%d",&chi[i]);
 printf(" English score：");
 scanf("%d",&eng[i]);
printf(" Programming score：");
 scanf("%d",&pro[i]);
 avg[i]=(chi[i]+eng[i]+pro[i])/3;
 c[i]=i;
 }

 int a, b,temp;
	for (a = 0; a < n - 1; ++a)          //循環N-1次
		for (b = 0; b < n - 1 - a; ++b)  //每次循環要比較的次數
			if (avg[b] < avg[b + 1])       //比大小後交換
			{
				temp = c[b];

				c[b] = c[b + 1];

				c[b + 1] = temp;


			}
 printf("\n                ID\tChinese\tEnglish\tProgramming\tavg\n");
 for (z=0;z<n;z++)
 {
 printf("number#%d\t%d\t%d\t%d\t%d\t         %d\n",z+1,id[c[z]],chi[c[z]],eng[c[z]],pro[c[z]],avg[c[z]]);
 }
 free(z);
 free(id);
 free(a);
 free(b);
 free(chi);
 free(n);
 free(i);
 free(avg);
 free(pro);
 free(eng);
 free(temp);
free(c);

 system("PAUSE");
return 0;

}

