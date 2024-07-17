#include <bits/stdc++.h>
using namespace std;
#define int long long
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

void generate_and_print_vector(int n)
{
    vector<int> result;
    int current_number = 1;
    int count = 1;

    while (result.size() < n)
    {
        for (int i = 0; i < count && result.size() < n; ++i)
        {
            result.push_back(current_number);
        }
        current_number++;
        count *= 2;
    }

    cout << result[n-1] << endl;

    for (int i = 0; i < n; ++i)
    {
        cout << result[i] << " ";
    }
    cout << endl;
}

signed main()
{
    int t;
    cin >> t; // Number of test cases

    for (int i = 0; i < t; ++i)
    {
        int n;
        cin >> n; // Number of elements for the current test case
        generate_and_print_vector(n);
    }

    return 0;
}

