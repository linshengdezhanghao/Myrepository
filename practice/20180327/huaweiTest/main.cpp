#include <iostream>

using namespace std;

typedef struct
{
    int FirstID;
    int SecondID;
} TheSymbiosis_s;
#define ARR_LEN  4
TheSymbiosis_s arr[ARR_LEN]={0};
int GetIndex( int id )
{
    for(int i = 0; i<ARR_LEN; i++ )
    {
        if(id == arr[i].FirstID )
        {
            return i;
        }
    }
    return -1;
}

int DealWithSymbisis( int dexId )
{
    int dexIndex = GetIndex( dexId );
    if ( -1 == dexIndex )
    {
        return -1;
    }

    for(int i = 0; i<ARR_LEN; i++ )
    {
        if( arr[dexIndex].SecondID == arr[i].FirstID )
        {
            return arr[i].FirstID;
        }
    }

    return -1;
}
int main()
{
    for(int i = 0;i<ARR_LEN;i++)
    {
        cin>>arr[i].FirstID>>arr[i].SecondID;
    }
    while(1)
    {
        int dexid = 0;
        int num = ARR_LEN;
        cin>>dexid;
        int rawid=dexid;
        while(num)
        {
            int tempid = DealWithSymbisis(dexid);
            if( -1!= tempid)
            {
                dexid = tempid;
            }
            else if(rawid == tempid)
            {
                cout<<"YES"<<endl;
                break;
            }
            else
            {
                cout<<"NO"<<endl;
                break;
            }
            num--;
        }
    }
    return 0;
}



