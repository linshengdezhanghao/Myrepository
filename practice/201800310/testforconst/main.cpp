#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int a = 10;
    int *b= &a;
    const int * &p = b;
    return 0;
}
