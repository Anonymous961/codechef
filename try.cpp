#include<bits/stdc++.h>
typedef long long int ll;
typedef long double lld;
typedef unsigned long long ull;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define vi vector<int>
#define pii pair<int,int>
#define pll pair<ll, ll>
#define mp make_pair
#define pb push_back
#define pob pop_back
#define ff first
#define ss second
using namespace std;
void fibo(int n,int a=0,int b=1){
    if(n==0){
        return ;
    }
    cout<<a<<endl;
    return fibo(n-1,b,a+b);
}
int main(){
    fastio();
    int n;
    cin>>n;
    fibo(n);
    return 0;
}