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
    int n, k, h;
    cin>>n>>k>>h;
    int ans=0;

    for(int i=n; i>=1; i--)
    {
        if(i>=h)
        {
            ans+=n;
            continue;
        }
        int a=i;
        int l=1, r=i;
        int b=0;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if((k-1)*(a-mid)+a>=h)
            {
                b=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        ans+=b;
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

