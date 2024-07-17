#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define neg cout << -1 << endl
#define pb push_back
#define ss second
#define ff first

const int mod = 1e9 + 7;
const int N = 2e5 + 5;
const int INF = 1e18;
int md = 998244353;

void solve()
{
    int n, k;
    cin>>n>>k;
    string s, p;
    cin>>s>>p;
    if(s==p)
    {
        if(n>=3)
        {
            yes;
            return;
        }
        if((k%2) and (s=="01" or s=="10"))
        {
            no;
            return;

        }
        yes;
        return;
    }
    int a=0, b=0;
    for(int i=0; i<n; i++)
    {
        a+=(s[i]=='1');
        b+=(p[i]=='1');
    }
    if(a!=b)
    {
        no;
        return;
    }
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        cnt+=(s[i]!=p[i]);
    }
    if((cnt%2) or (cnt/2)>k)
    {
        no;
        return;
    }
    cnt/=2;
    if(n>=3)
    {
        yes;
        return;
    }
    cnt=k-cnt;
    if(cnt%2)
    {
        no;
        return;
    }
    yes;

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test=1;
    cin >> test;
    for (int tc = 0; tc < test; tc++)
    {
        solve();
    }

    return 0;
}

