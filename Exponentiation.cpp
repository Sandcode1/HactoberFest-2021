#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll fast(ll a,ll b)
{
    ll tmp=1;
   while(b>0)
   {
     if(b&1)
     {
         tmp=(tmp*a)%1000000007;
     }
     a=(a*a)%1000000007;
     b=b/2;
   }
  return tmp;
}

int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
       ll a,b;
       cin>>a>>b;
     ll m=  fast(a,b);
     cout<<m<<endl;
   }
}