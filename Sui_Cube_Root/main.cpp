#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
////C109118115 資管二甲 余承彥
double Cube_Root(double a)
{
    double start = 0;
    double end = a;
    double mid=(start+end)/2;

	while(mid!=start &&(mid*mid*mid)!=a)
    {
        if ((mid*mid*mid)>a)
        {

            end=mid;
            mid=(start+end)/2;

        }
        else{
                start=mid;
                mid=(start+end)/2;
        }
    }
  return mid;
  }
  int main()
{
 double a = 8;
   printf("Cube_root of %f is %f\n",a, Cube_Root(a));

}
