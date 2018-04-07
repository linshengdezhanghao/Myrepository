#include <stdio.h>
#include <stdlib.h>
#define X 3
#define Y X*2
#undef X
#define X 2

int fun(int b[100])
{
    int s = 5;
    return s;//sizeof(b);// sizeof (b) 的值是多少？
}
int checkSystem( )
{
union check
{
int i;
char ch;
} c;
c.i = 1;
return (c.ch ==1);
}
enum Color
{
GREEN = 1,
RED,
BLUE,
GREEN_RED = 10,
GREEN_BLUE
}ColorVal;
int main()
{
    int len = 0;
    int sllen = 0;
    float test = 1.2564756;
    int p[100];
    int i = 3;
    unsigned j = 10;
    int z=Y;
    if( 0 == sllen )
    {
        sllen = test;
    }

    len = (++i)+(++i)+(++i);

    printf("Hello world! %d  %d\n",len,sllen);
    return 0;
}
