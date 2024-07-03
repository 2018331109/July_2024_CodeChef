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
int cnt=0;
vector<int>adj[N];

void call(int cur, int par)
{
    //cout<<"called"<<endl;
    if(adj[cur].size()==1) return;
    for(auto it:adj[cur])
    {
        if(it!=par)
        {
            cnt++;
            call(it, cur);
        }
    }
}

void solve()
{
    int n;
    cin>>n;
    map<int, int>mp;
    int mx=0;
    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        mp[x]++;
    }
    int ans=INF;
    for(auto it:mp)
    {
        ans=min(ans, (n-it.ss)*it.ff);
    }
    cout<<ans<<endl;

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test=1;
    cin >> test;
    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

