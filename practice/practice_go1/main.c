#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    system("title ��ϰ");  //����cmd���ڱ���
    system("mode con cols=48 lines=25");  //���ڿ�ȸ߶�
    system("color f0");  //����д�� red ������ɫ��
    system("date /T");
    system("TIME /T");

    int acc[10]={1,85,45,565,541,656,646,651,5,66};
    int a,b,c,i,j;
    printf("qing shuru shiyineideshuzi\n");
    scanf("%d",&c);
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(acc[i]<=acc[j])
            {
                a=acc[i];
                acc[i]=acc[j];
                acc[j]=a;
            }
        }
    }
    for(b=0;b<10;b++)
    {
        printf("%d\n",acc[b]);
    }
    printf("chaxundeshuziwei\n%d",acc[10-c]);
}
