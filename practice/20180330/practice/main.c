#include <stdio.h>
#include <stdlib.h>
#include<conio.h>2
main(void)
{
    int c;
    int len = 0;
    while((c=getchar())!='\n')//c���յ�ֵ�������һ���ַ����µĻس����з�'\n',c�ǲ�����ʾ��
    {
        len = strlen((const char *)c);
    }

    printf("%d",len);
    getchar();
}
