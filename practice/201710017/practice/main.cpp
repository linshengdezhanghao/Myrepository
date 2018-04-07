#include <iostream>
#include <string>
#include <cctype>
using namespace std;
typedef struct
{
    int a;
    int b[10];
}struct1;

typedef struct
{
    int a;
    int b[10];
    int c;
}struct2;

typedef struct
{
    int a;
    int b[10];
    int d;
}struct3;

typedef struct
{
    int a;
    int a1;
    int b[10];
    int c;
}struct4;

template <class Head, class Block>
class DB
{
public:
    DB();
public:
    virtual int test();
    virtual int Size();
};

template <class Head, class Block>
DB< Head,  Block>::DB()
{

}

template <class Head, class Block>
int DB< Head,  Block>::test()
{
    Head HeadData = {0};
    Block BlockData = {0};
    HeadData.a = 1;
    BlockData.c = 2;
    return HeadData.a + BlockData.c;
}

template <class Head, class Block>
int DB< Head,  Block>::Size()
{
    return sizeof(Head) + sizeof(Block);
}

template <class Head, class Block>
class DBSon : public DB< Head,  Block>
{
public:
    DBSon();
public:
    int test();
};

template <class Head, class Block>
DBSon< Head,  Block>::DBSon()
{

}
template <class Head, class Block>
int DBSon< Head,  Block>::test()
{
    Head HeadData = {0};
    Block BlockData = {0};
    HeadData.a = 2;
    BlockData.c = 3;
    return HeadData.a + BlockData.c;
}

template <class Head, class Block, class Temp >
class DBDaughter : public DB< Head,  Block>
{
public:
    DBDaughter();
public:
    int test();
};

template <class Head, class Block, class Temp >
DBDaughter< Head,  Block, Temp >::DBDaughter()
{

}
template <class Head, class Block, class Temp >
int DBDaughter< Head,  Block, Temp >::test()
{
    Head HeadData = {0};
    Block BlockData = {0};
    Temp TempData = {0};
    HeadData.a = 4;
    BlockData.c = 5;
    TempData.d = 6;
    return HeadData.a + BlockData.c + TempData.d;
}

int main()
{
    DB<struct1,struct2> instance1;
    DB<struct3,struct4> instance2;
    DBSon<struct1,struct2> instance3;
    DBSon<struct3,struct4> instance4;
    DBDaughter<struct1,struct2,struct3> instance5;
    DBDaughter<struct3,struct4,struct3> instance6;
    cout << sizeof(struct1) << endl;
    cout << sizeof(struct2) << endl;
    cout << sizeof(struct3) << endl;
    cout << sizeof(struct4) << endl;
    cout << instance1.test()<<"-"<<instance1.Size() << endl;
    cout << instance2.test()<<"-"<<instance2.Size() << endl;
    cout << instance3.test()<<"-"<<instance3.Size() << endl;
    cout << instance4.test()<<"-"<<instance4.Size() << endl;
    cout << instance5.test()<<"-"<<instance5.Size() << endl;
    cout << instance6.test()<<"-"<<instance6.Size() << endl;
    return 0;
}
