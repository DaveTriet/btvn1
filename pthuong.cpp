#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e4+1;
ll f[N][3];
ll vis[N];
int main()
{
    ll n;
    cin>>n;
    ll a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    ll dis=1;
    //f[0][0]=-1e18;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=2;j++)
        {
            f[i][0]=max(f[i][0],f[i-1][j]);
            if(j!=0)
            {
                f[i][j]=f[i-1][j-1]+a[i];
                vis[i]=i-1;
            }
        }
        f[1][2]=0;
    }
    ll res=-1e18;
    ll d=0;
    for(int j=0;j<=2;j++)
    {
        //cout<<f[n][j]<<" "<<j<<endl;
        res=max(res,f[n][j]);
    }
    cout<<res<<endl;
    vector<ll>v;
    for(int i=n;i>=1;i--)
    {
        if(d==0)
        {
            if(f[i][1]==res)
            {
                v.push_back(i);
                res-=a[i];
            }
            else if(f[i][2]==res)
            {
                d=1;
                v.push_back(i);
                res-=a[i];
            }
        }
        else if(d==1)
        {
            v.push_back(i);
            res-=a[i];
            d=0;
        }
    }
    for(int i=v.size()-1;i>=0;i--) cout<<v[i]<<" ";
}
