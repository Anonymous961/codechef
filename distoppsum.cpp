#include <bits/stdc++.h>
typedef long long int ll;
typedef long double lld;
typedef unsigned long long ull;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define MOD 1000000007
#define MAX 10000001
#define MOD1 998244353
#define INF 1e18
#define vi vector<int>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mp make_pair
#define pb push_back
#define pob pop_back
#define ff first
#define ss second
using namespace std;

void soln()
{
    int n;
    cin >> n;
    int arr[n], i = 0;
    for (i = 0; i < n / 2; i++)
    {
        arr[i] = n / 2 - i;
    }
    for (int j = i; j < n; j++)
    {
        arr[j] = j + 1;
    }
    for (auto &i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        soln();
    }
    return 0;
}