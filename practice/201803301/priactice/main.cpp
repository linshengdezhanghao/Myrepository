#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <list>

using namespace std;

typedef struct
{
    char Arr[20];
    char RawArr[20];
}tempStruct_s;

int MyStrcmp( tempStruct_s A, tempStruct_s B )
{
    return ( strcmp( (const char *)A.Arr, (const char *)B.Arr ) < 0);
}
typedef list<tempStruct_s> LISTText;

int main()
{
    tempStruct_s temp = {0};
    LISTText templist;
    int num = 0;
    char c;

    while ( ( c = getchar() )!='/n')
    {
        if( c !=' ')
        {
            temp.RawArr[num]=c;
            if( 'A'<= c && c <= 'Z')
            {
                temp.Arr[num]=c+32;
            }
            else
                {
                    temp.Arr[num]=c;
                }
        }
        else
        {
            memset( &temp, 0x00, sizeof( temp ) );
            templist.push_back( temp );
            c = 0;
        }
        c++;
    }

    templist.sort( MyStrcmp );

    LISTText::iterator it;
    for( it = templist.begin(); it != templist.end(); it++ )
    {
        cout<<it->Arr<<" ";
    }
    cout << "Hello world!" << endl;
    return 0;
}


