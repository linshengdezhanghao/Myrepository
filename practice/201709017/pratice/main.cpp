class A{};
class B{
public:
B();
virtual 〜B();
}；
class C{
private:
#pragma pack(4)
int i; short j; float k; char 1[64]; long m; char *p;
#pragma pack()
}；
class D{
private:
#pragma pack(1)
int i; short j; float k; char 1[64];  long m; char *p;
#pragma pack()
};
int main(void){
printf("%d\n",sizeof(A));
printf("%d\n",sizeof(B));
printf("%d\n",sizeof(C));
printf("%d\n",sizeof(D));
return 0;
}
