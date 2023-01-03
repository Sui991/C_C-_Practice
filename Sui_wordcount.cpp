#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <vector>
#include <string.h>
//¸êºÞ¤G¥Ò C109118115 §E©Ó«Û
using namespace std;
vector<string> split(const string& str, const string& delim)
{
	vector<string> res;
	if("" == str) return res;
	char * strs = new char[str.length() +1];
	strcpy(strs, str.c_str());
	char *d = new char[delim.length() +1];
	strcpy(d, delim.c_str());
	char *p = strtok(strs, d);
	while(p)
	{
		string s = p;
		res.push_back(s);
		p = strtok(NULL,d);
	}
	return res;
}
int main(int argc, char** argv) {
    string line ;
    char lyric[1000];
    std::vector<string> t , a;

FILE *fp=fopen("Never_Enough.txt","r");
fgets(lyric,1000,fp);
    	std::vector<string> list = split(lyric, "  , ?");
int ListLength = list.size();
    	for (int i = 0; i < ListLength ; i++)
    	{
    		vector<string>::iterator it = std::find(t.begin(), t.end(), list[i]);
    		if(it == t.end() )
            {
                t.push_back(list[i]);
                int j = 0;
                string lyric = "";

                	for (int v = 0; v < ListLength ; v++)
    	{
                    if(list[i] == list[v])
                    {
                       j++;
                    }
                }
                string convert = to_string(j); lyric.append(string(list[i]));lyric.append("\t");lyric.append(convert);
                 a.push_back(lyric);
            }
		}
		int ALength=a.size();
		sort(a.begin(),a.end());
        for (int h=0;h<ALength;h++)
        {
            cout << a[h] << endl;
        }
    fclose(fp);
	return 0;
}

