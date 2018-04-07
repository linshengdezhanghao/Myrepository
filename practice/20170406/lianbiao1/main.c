#include <stdio.h>
#include <stdlib.h>
#define NULL 0
#define TYPE struct lianbiao
#define LEN sizeof(struct lianbiao)

struct lianbiao
{
    int num;
    int sorce;
    struct lianbiao *next;
};
TYPE *creat(int num)
{
    struct lianbiao *head,*pf,*pb;
    int i;
    for(i=0;i<n;i++)
    {
        pb=(TYPE*)malloc(LEN);
        printf("input Nember and sorce\n");
        scanf("%d%d",&pb->num,&pb->sorce);
        if(i==0) pf=head=pb;
        else pf->next=pb;
        pb->next=NULL;
        pf=pb;
    }
}
int main()
{
    printf("Hello world!\n");
    return 0;
}
