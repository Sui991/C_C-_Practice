#include <stdio.h>
#include <stdlib.h>
//��ޤG��C109118115 �E�ӫ�
int main()
{

 int i,n,z;
long int *id;
 int *chi,*eng,*pro,*avg,*c;
 printf("Enter numbers of student:");
 scanf("%d",&n);
 id=malloc(sizeof(long int)*n); //�ʺA�O����t�m
 chi=malloc(sizeof(int)*n); //�ʺA�O����t�m
 eng=malloc(sizeof(int)*n); //�ʺA�O����t�m
 pro=malloc(sizeof(int)*n); //�ʺA�O����t�m
 avg=malloc(sizeof(int)*n); //�ʺA�O����t�m
c=malloc(sizeof(int)*n);
 for (i=0;i<n;i++)
 {
 printf("Enter number%d of student score:\n",i+1);
 printf(" #ID�G");
 scanf("%d",&id[i]);
 printf(" Chinese score:");
 scanf("%d",&chi[i]);
 printf(" English score�G");
 scanf("%d",&eng[i]);
printf(" Programming score�G");
 scanf("%d",&pro[i]);
 avg[i]=(chi[i]+eng[i]+pro[i])/3;
 c[i]=i;
 }

 int a, b,temp;
	for (a = 0; a < n - 1; ++a)          //�`��N-1��
		for (b = 0; b < n - 1 - a; ++b)  //�C���`���n���������
			if (avg[b] < avg[b + 1])       //��j�p��洫
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

