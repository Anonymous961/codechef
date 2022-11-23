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

void soln(){
    string a,b;
    int n;
    cin>>n>>a>>b;
    string one_zero="",zero_one="";
    for(int i=0; i<n; i++){
        if(i&1){
            one_zero+='1',zero_one+='0';
        }else{
            zero_one+='1',one_zero+='0';
        }
    }
    int one =count(a.begin(),a.end(),'1');
    if(one){
        if(b==zero_one || b==one_zero){
            if(a==b){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"YES"<<endl;
        }
    }else{
        if(a==b){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return;
}

int main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        soln();
    }
    return 0;
}