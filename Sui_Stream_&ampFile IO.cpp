// [ Code ]: ex12-1.cpp -- Output FILE
//C109118115 ¸êºÞ¤G¥Ò §E©Ó«Û

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;
int main(){
 ofstream outfile ("lakers.txt");
 string s = "Kobe Bryant\n";
 if(!outfile){
 cout << "can't open file: lakers.dat \n exiting..." << endl;
 }
 else{
 outfile << s << "Kobe improved his fade-away "
 << "after watching a cheetah hunt, "
 << "'Inspiration surrounds us'!" << endl;
 }
 system("PAUSE");
 return 0;
}
