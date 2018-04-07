#include <iostream>
#include <cmath>
using namespace std;
/*
int fceil( int x )
{
    int temp = 0;
    for( int i = 0;i<4;)
    {
        temp +=((x%10+5)%10)*(pow(10,i));
        x = x/10;
        i++;
    }
    int out = 0;
    temp = temp%10000+1;
    for(int i=3; i>=0;i--)
    {

		out +=(temp%10)*pow(10,i);
		temp = temp/10;
    }
    return out;
}
*/
int ack( int x, int y )
{
    if(x==0)
        return y+1;
    else if(y==0)
        return ack(x-1,1);
    else
        return ack(x-1,ack(x,y-1));
}
int main()
{
    cout << "Hello world!" << endl;
    int x = 0;
    cin>>x;
    int x1 = 0;
    cin>>x1;
    cout << ack(x,x1) << endl;
    cout<<"10^ 2 <<"<<pow(10, 2);
    return 0;
}
