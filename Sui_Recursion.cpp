#include <iostream>
#include <cstdlib>
using namespace std;
//C109118115 資管二甲
int gcd(int x,int z){
if(z!=0){
    return gcd(z,x%z);
    return x;
}
}
int f ( int y){
if(y==0)
    return 0;
else if(y==1)
    return 1;
else return f(y-2)+f(y-1);
}
int main(){
 int n ,h, a;
 cout << " 輸入兩個正整數: ";

 cin >> n>>h;
 cout <<n << "&" << h<< "的GCD為"<<":"<<gcd(n,h)<<endl;
cout<<"enter an index number for fibonacci series";
cin>>a;
cout<<"\nThe"<<a+1<<"th Fibonacci number:"<<f(a)
 cout << "\n Continue or not? (y/n) ";

 system("pause");
 return 0;
}



