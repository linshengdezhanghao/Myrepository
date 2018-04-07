/**
 * 依赖倒置原则（Dependency Inversion Principle）
 * 依赖于抽象(接口),不要依赖具体的实现(类)，也就是针对接口编程。
 *
 */

#include <iostream>
#include "stdlib.h"

#define nullptr 0

class HardDisk
{
public:
    virtual void work() = 0;
    virtual ~HardDisk() {}
};

class Memory
{
public:
    virtual void work() = 0;
    virtual ~Memory() {}
};

class CPU
{
public:
    virtual void work() = 0;
    virtual ~CPU() {}
};


class Computer
{
public:
    Computer(HardDisk * harddisk, Memory * memory, CPU * cpu)
    {
        m_harddisk = harddisk;
        m_memory = memory;
        m_cpu = cpu;
    }

    void work()
    {
        m_harddisk->work();
        m_memory->work();
        m_cpu->work();
    }

private:
    HardDisk *m_harddisk;
    Memory *m_memory;
    CPU *m_cpu;
};

class InterCPU: public CPU
{
public:
    virtual void work() override
    {
        std::cout << "我是Inter CPU 我工作良好" << std::endl;
    }
};

class AMDCPU: public CPU
{
public:
    virtual void work() override
    {
        std::cout << "我是AMD CPU 我工作良好" << std::endl;
    }
};

class KingstomMemory: public Memory
{
public:
    virtual void work() override
    {
        std::cout << "我是Kingstom Memory 我工作良好" << std::endl;
    }
};

class SamsungMemory: public Memory
{
public:
    virtual void work() override
    {
        std::cout << "我是Samsung Memory 我工作良好" << std::endl;
    }
};

class WDHardDisk: public HardDisk
{
public:
    virtual void work() override
    {
        std::cout << "我是WD HardDisk 我工作良好" << std::endl;
    }
};

class STHardDisk: public HardDisk
{
public:
    virtual void work() override
    {
        std::cout << "我是ST HardDisk 我工作良好" << std::endl;
    }
};

void DIP_test()
{
    HardDisk * harddisk = nullptr;
    Memory * memory = nullptr;
    CPU * cpu = nullptr;
    Computer * mycomputer = nullptr;

    harddisk = new WDHardDisk;
    memory = new KingstomMemory;
    cpu = new InterCPU;

    std::cout << "---------->>>" << std::endl;
    mycomputer = new Computer(harddisk, memory, cpu);
    mycomputer->work();
    delete mycomputer;
    mycomputer = nullptr;
    delete cpu;
    cpu = nullptr;
    delete memory;
    memory = nullptr;
    delete harddisk;
    harddisk = nullptr;
    std::cout << "<<<----------" << std::endl;

    harddisk = new STHardDisk;
    memory = new SamsungMemory;
    cpu = new AMDCPU;

    std::cout << "---------->>>" << std::endl;
    mycomputer = new Computer(harddisk, memory, cpu);
    mycomputer->work();
    delete mycomputer;
    mycomputer = nullptr;
    delete cpu;
    cpu = nullptr;
    delete memory;
    memory = nullptr;
    delete harddisk;
    harddisk = nullptr;
    std::cout << "<<<----------" << std::endl;

    return;
}

int main()
{
    DIP_test();

    system("pause");
    return 0;
}
