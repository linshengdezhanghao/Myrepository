#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    const unsigned int size = 10;
    string abc[size] =
    {
        "9684651",
        "adk465",
        "�й�",
        "uahofd63516",
        "���1",
        "���",
        "����linsheng",
        "��ĺú�",
        "�ü�",
        "̫����"
    };
    sort(abc,abc+size);
    for(int i=0; i<size; i++)
        cout<<abc[i]<<endl;
    return 0;
}
