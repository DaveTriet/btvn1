#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n,m;
    cin>>n>>m;
    ll a[n+1],pf[n+1],l,r;
    pf[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        pf[i]=pf[i-1]+a[i];
    }
    ll res=-1e18;
    for(int i=1;i<=n;i++)
    {
        if(i>m && res<pf[i]-pf[i-m])
        {
            res=pf[i]-pf[i-m];
            l=i-m+1;
            r=i;
        }
    }
    for(int i=l;i<=r;i++) cout<<a[i]<<" ";
}
