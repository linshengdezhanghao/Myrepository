#include <iostream>

using namespace std;

int main()
{
    const int size = 10;
    int arr[size] {1};
    for ( int i = 0; i<11; i++)
        cout<<arr[i]<<endl;
    cout << "Hello world!" << endl;
    return 0;
}
