#include <iostream>
#include <string.h>
using namespace std;

inline int xchg(unsigned char *pstr, unsigned l, unsigned j )
{
    if( 0 == pstr )
     {
         cout<<"wrong";
        return false;
     }
    else
    {
        int len = strlen( (const char *)pstr);
        int index = l;
        for( int i=0; i<len; i++)
        {
            if(i>=j+l)
            {
                pstr[index]=pstr[i];
                index++;
            }
        }
        pstr[index]=0;
    }
    return true;
}
int main()
{
    cout << "Hello world!" << endl;
    unsigned char str[100]={0};
    int a,b;
    cin>>str;
    cin>>a>>b;

    if( true == xchg(str,a,b))
    {
        cout<<"true"<<endl;
        cout<<str<<endl;
    }
    else{
        cout<<"wrong";
    }

    return 0;
}
