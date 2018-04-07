#include <stdio.h>
#include <stdlib.h>
#include<conio.h>2
main(void)
{
    int c;
    int len = 0;
    while((c=getchar())!='\n')//c接收的值是输入第一个字符后按下的回车换行符'\n',c是不会显示的
    {
        len = strlen((const char *)c);
    }

    printf("%d",len);
    getchar();
}
