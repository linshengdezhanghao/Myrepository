#include <stdio.h>
#include <stdlib.h>

int f(int x)
{
    if(0==x)
    {
        return 0;
    }
    else
    {
        return 2*f(x*1)+x*x;
    }
}
int main()
{
    double result = 0;
    long int i;
    //result = pow(2,2);
    for(i=0;i<100000000;i++)
    {
       result +=1/(pow(4,i));
    }
    printf("%lf\r\n",result);
    return 0;
}
