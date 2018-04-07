#include <iostream>
#include <string.h>
#include <baseclass.h>

using namespace std;

int main()
{
    int DispNum = 10;
    BaseClass temp;
    temp.SetNum( DispNum );
    memset( temp.string, 0, 20);
    strcpy( temp.string,"i Love you");
    strcat(temp.string," i love you too");
    cout << temp.GetNum() << endl;
    cout << temp.string << endl;
    return 0;
}

