#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <list>

using namespace std;

#define M (10)
#define len (22)

typedef struct{
    int num;
    char str[len];
}word;

typedef list<word>PBDate;


int cmp( word a, word b )
{
    return strcmp( a.str, b.str)<0;
}
word wordtemp[M]=
    {
        {1,"65161"},
        {2,"5465161"},
        {3,"5665161"},
        {4,"afg65161"},
        {5,"我不是"},
        {6,"我是中国人"},
        {7,"gfar65161"},
        {8,"fr65161"},
        {9,"tghy65161"},
        {10,"rg65161"}
    };
int main()
{
    PBDate PB;
    PB.clear();
    PBDate::iterator it;

    for(int j=0; j<10; j++)
        PB.push_back(wordtemp[j]);

    PB.sort(cmp);

    for(it=PB.begin();it!=PB.end();it++)
        cout<<it->num<<"__"<<it->str<<endl;

    return 0;
}
