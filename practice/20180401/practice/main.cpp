#include <iostream>
#include <stdio.h>
#include <list>
#include <string.h>
#include <string>

using namespace std;
enum
{
    e_Ship_NULL,
    e_Ship_Bigin,
    e_Ship_Succ,
};
typedef struct
{
    int FirstID;
    int SecondID;
}MapRelationship_s;

typedef list<MapRelationship_s> LIST_MAP;

int findSecondID( int dexID, LIST_MAP *pList )
{
    if ( 0 != pList )
    {
		LIST_MAP::iterator it = pList->begin();
        for( ; it!= pList->end(); it++ )
        {
            if( dexID == it->FirstID )
            {
                return it->SecondID;
            }
        }
    }
    return -1;
}

int Atoi( char *pNum )
{
    if ( 0 == pNum )
        return 0;

    int len = strlen((const char *)pNum);
    int num = 0;
    for(int i=0;i<len;i++)
    {
        if ( '0' <= pNum[i]&& pNum[i] <= '9' )
        num *= 10;
        num += pNum[i]-0x30;
    }
    return num;
}
int main()
{
    cout << "Hello world!" << endl;
    LIST_MAP *pTempList = new LIST_MAP();
    char c;
    char firstarr[20]={0};//缓存字符串数据
    char secondarr[20]={0};
    int index = 0;//临时数组下标
    int relationshipFlag = e_Ship_NULL ;

    do
    {
        c = getchar();
        if( '0'<=c&&c<='9')
        {
            if ( relationshipFlag == e_Ship_Succ )
            {
                secondarr[index]=c;
                index++;
            }
            else
            {
                firstarr[index]=c;
                index++;
            }
        }
        else if ( '-' == c )
        {
            relationshipFlag = e_Ship_Bigin;
        }
        else if ( '>' == c && relationshipFlag == e_Ship_Bigin )
        {
            relationshipFlag = e_Ship_Succ;
            index = 0;
        }
        else if ( ',' == c || '\n'== c  )
        {
            MapRelationship_s tempParam = {0};
            tempParam.FirstID = Atoi(firstarr);
            tempParam.SecondID = Atoi(secondarr);
            pTempList->push_back(tempParam);
            memset( firstarr,0x00, sizeof( firstarr ) );
            memset( secondarr,0x00, sizeof( secondarr ) );
            relationshipFlag = e_Ship_NULL;
            index = 0;
        }
		else
		{
			cout<<"param is error"<<endl;
		}
    }while( c !='\n' );

    LIST_MAP::iterator it = pTempList->begin();
    for( ; it!= pTempList->end(); it++ )
    {
        cout<<it->FirstID<<"->"<<it->SecondID<<endl;
    }

    while(1)
    {
        cout<<"请输入你要查询的数据"<<endl;
        string str;
        int num = 0;

        cin>>str;
        num = Atoi( (char *)str.c_str());
        int tempID = num;
        for(int i = 0; i<pTempList->size(); i++ )
        {
            tempID = findSecondID( tempID, pTempList );
            if( num == tempID )
            {
                cout<<"YES"<<endl;
                break;
            }
            else if ( -1 == tempID )
            {
                cout<<"NO"<<endl;
                break;
            }
        }
    }
	delete( pTempList );
    return 0;
}
