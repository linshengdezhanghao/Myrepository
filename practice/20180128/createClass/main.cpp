#include <stdio.h>
#include "ObjectFactory.h"
#include "Object.h"
#include "ObjectA.h"
#include "ObjectB.h"
#include <iostream>
#include <typeinfo>
#include <iomanip>
#define xx typeid(this).name()
class test
{
    public:
    void out(void)
    {
        if( __cplusplus )
        {
            std::cout<<xx<<"::"<<__FUNCTION__;
        }
        else
        {

        }
    }
};

int main(int argc, const char *argv[])
{
    CObject *objA = static_cast<CObject *>(CObjectFactory::CreateObject("CObjectA"));
    std::string className;
    if(objA == NULL)
    {
        printf("[ERROR] Can't Create Class ObjectA!\n");
    }
    else
    {
        className = objA->GetClassName();
        printf("[OK] Create %s !\n", className.c_str());
    }

    CObject *objB = static_cast<CObject *>(CObjectFactory::CreateObject("CObjectB"));
    if(objB == NULL)
    {
        printf("[ERROR] Can't Create Class ObjectB!\n");
    }
    else
    {
        className = objB->GetClassName();
        printf("[OK] Create %s !\n", className.c_str());
    }
    test data;
    data.out();

    return 0;
}
