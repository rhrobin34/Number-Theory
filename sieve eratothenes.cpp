#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
        int n;
        cin>>n;
        int arr[n+3];
        memset(arr,0,sizeof(arr));
        for(int i=2;i*i<=n;i++)
        {
            if(arr[i]==0)
            {
                for(int j=i*i;j<=n;j+=i)
                {
                    arr[j]=1;
                }
            }
        }
        for(int i=2;i<=n;i++)
        {
            if(arr[i]==0)
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;
     }
}
