#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod=3;
int main()
{
    ll n;
    string s;
    cin>>n>>s;
    ll cur=1,res=0;
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]=='1')
        {
            res=(res+cur)%mod;
        }
        cur=cur*2%mod;
    }
    cout<<res;
}
