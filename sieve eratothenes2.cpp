#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
bool arr[90000001];
int n=90000000;
 vector<int>v;
 void sieve()
 {
    for(int i=2;i*i<=n;i++)
        {
            if(arr[i]==false)
            {
                for(int j=i*i;j<=n;j+=i)
                {
                    arr[j]=true;
                }
            }
        }
       for(int i=2;i<=n;i++)
       {
        if(arr[i]==false)
        {
            v.push_back(i);
        }
       }
 }
int main()
{
    sieve();
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       cout<<v[n-1]<<" ";
    }
}