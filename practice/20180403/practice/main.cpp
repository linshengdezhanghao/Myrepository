#include <iostream>

struct data
{
    std::string name;
    int age;
};

int main()
{
    data mydata = {"Superman", 10};

    std::cout << mydata.name << " " << mydata.age << std::endl;

    std::cout << sizeof(mydata)<<std::endl;

    return 0;
}
