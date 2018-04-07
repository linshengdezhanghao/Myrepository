#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <list>

using namespace std;

#define M (10)
#define len (22)
/*
typedef struct{
    int num;
    char str[len];
}word;
*/
typedef struct{
    int num;
    unsigned long str;
}word;
typedef list<word>PBDate;


int cmp( word a, word b )
{
    //return strcmp( a.str, b.str)<0;
    return 0;
}

class findid
{
 public:
     findid(int whatid):id(whatid){}
     bool operator()(word inword){return(inword.num)==id;}
 private:
     int id;
};
/*
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
    */


int main()
{
    unsigned long index = 0;
    PBDate PB;
    PB.clear();
    PBDate::iterator it;
    word wordtemp = {0};

    for(unsigned long j=0; j<14000-1; j++)
    {
        wordtemp.num = j;
        wordtemp.str = j;
        PB.push_back(wordtemp);
    }

    //PB.sort(cmp);

    //for(it=PB.begin();it!=PB.end();it++)
        //cout<<it->num<<"__"<<it->str<<endl;

    //int num ;
    //cout<<"删除哪一个"<<endl;
/*

    if( 0 > num || num >10)
        num = 0;

    PBDate::iterator it1 = PB.begin();
    advance(it1,num);
    PB.erase(it1);

    for(it=PB.begin();it!=PB.end();it++)
        cout<<it->num<<"__"<<it->str<<endl;
*/

    cout<<"请输入要查找的数字"<<endl;
    cin>>index;

    PBDate::iterator it2 = find_if(PB.begin(),PB.end(),findid(index));

    if(it2!=PB.end())
        cout<<it2->str<<endl;

    return 0;
}
