#include <iostream>

using namespace std;

int func( int *pArr, int len, int n )
{
    int min = 0;
    int max = len-1;
    int minder = 0;
    while( max-min>1)
    {
        minder = min + (max-min)/2;
        if( n>pArr[minder])
        {
            min = minder;
        }
        else if( n<pArr[minder])
        {
            max = minder;
        }
        else
        {
            return minder;
        }
    }

    return minder;
}
int main()
{
    cout << "Hello world!" << endl;
    int n;
    cin>>n;
    int arr[100]={0};
    for( int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int num;
    cin>>num;
    cout<<func(arr,n,num);
    return 0;
}
