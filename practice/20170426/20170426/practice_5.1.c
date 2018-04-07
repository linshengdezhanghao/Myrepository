#include <iostream>
using namespace std;
double cube(double a);
double refcube(double &ra);
int main()
{
        double x = 5.0;
        cout<<cube(x)<<endl;
        cout<<x<<endl;
        cout<<refcube(x)<<endl;
        cout<<x<<endl;
        return 0;
}
double cube(double a)
{
         a *= a*a;
         return a;
}
double refcube(double &ra)
{
        ra *= ra*ra;
        return ra;
}
