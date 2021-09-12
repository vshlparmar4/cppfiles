#include<bits/stdc++.h>
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define int long long int
#define mod 1000000007
#define INF 9223372036854775807

using namespace std;

/*

struct S
{
  int a;

  bool operator <(const S& other) const
  {
    return a < other.a;
  }

};

*/



const int N = 5e5 + 5;

void solve()
{
    int n;
    cin>>n;
    
    vector<int> v(n);
    int t = INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++)
    cin>>v[i],sum+=v[i],t=max(t,v[i]);

    if(sum<=t*(n-1))
    {
        cout<<t*(n-1)-sum<<endl;
        return;
    }

    int p = (sum+n-2)/(n-1);
    cout<<p*(n-1)-sum<<endl;

    




}
signed main()

{
    FAST_IO;
    int t = 1;

    cin>>t;

    while(t--)
    {
        solve();
    }
    
    return 0;
}

 /* int power(int a, int b)
{
    if(b==0)
    return 1;

    int t = power(a,b/2);
    t*=t;
    t%=mod;
    if(b&1)
    {
        t*=a;
        t%=mod;
    }

    return t;
}

int ncr(int n, int r)
{
    int tt = fact[n];
    tt*=power(fact[r],mod-2);
    tt%=mod;
    tt*=power(fact[n-r],mod-2);
    tt%=mod;
    return tt;
} */
