class persen{
public:
    persen(const std::string &nm,const std::string &addr):
        name(nm),address(addr)
        {

        }
    std::string getname() const//��Ա���������޸����ݳ�Ա��ֵ��������const��֤��һ��
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
/*��persen���name��address��������Ա�����privateʵ�֣���Ϣ���أ���getname��getaddress����Ϊpublic���ṩ��
���ʹ�õĽӿڣ����ͨ���ýӿ�������persen��ĳ�Ա�����캯��ͨ����Ϊpublic���Ա㴴��persen��Ķ���*/
