#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        for(int i=2;i<=n;i++)
        {
            if(n%i)
            {
                while(n%i==0)
                {
                    count++;
                    n=n/i;
                }
                cout<<i<<" ";
            }
        }
    }
}