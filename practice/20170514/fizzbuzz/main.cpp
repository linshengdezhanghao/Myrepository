#include <iostream>

using namespace std;

int main()
{
    int i;
    for(i=1;i<101;i++)
    {
        if((0==i%15)&& i>14)
        {
            cout<<"fizzbuzz"<<endl;
        }
        else if((0==i%3)&& i>2)
        {
            cout<<"fizz"<<endl;
        }
        else if((0==i%5)&&i>4)
        {
            cout<<"buzz"<<endl;
        }
        else
            cout<<i<<endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}
