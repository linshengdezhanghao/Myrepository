class persen{
public:
    persen(const std::string &nm,const std::string &addr):
        name(nm),address(addr)
        {

        }
    std::string getname() const//成员函数不能修改数据成员的值，所以用const保证这一点
    {
        return name;
    }
    std::string getaddress() const
    {
        return address;
    }
private:
    std::string name;
    std::string address;
};
/*将persen类的name和address这两个成员定义成private实现，信息隐藏，将getname和getaddress定义为public，提供给
外界使用的接口，外界通过该接口来访问persen类的成员而构造函数通常声为public，以便创建persen类的对象*/
