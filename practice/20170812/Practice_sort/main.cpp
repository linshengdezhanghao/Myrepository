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
        "中国",
        "uahofd63516",
        "你好1",
        "你好",
        "我是linsheng",
        "真的好好",
        "好简单",
        "太棒了"
    };
    sort(abc,abc+size);
    for(int i=0; i<size; i++)
        cout<<abc[i]<<endl;
    return 0;
}
