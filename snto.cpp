#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool check(ll n) // dpt O( sqrt(n)/6 )
{
    if(n<4) return true;
    if(n%2==0 || n%3==0) return false;
    for(int i=5;i<=sqrt(n);i+=6)
        if(n%i==0 || n%(i+2)==0) return false;
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);cout.tie(0);
    ll n;
    cin>>n;
    n++;
    while(!check(n)) n++;
    cout<<n;
}
