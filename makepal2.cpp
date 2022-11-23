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
bool palin(string s,int n){
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]){
            return 0;
        }
    }
    return 1;
}
int main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        // for(int i=0;i<n/2;i++){
        //     if(palin(s,n)){
        //         cout<<s<<endl;
        //         break;
        //     }
        //     if(s[0]!=s[n-1] && s[0]==s[1]){
        //         s.pob();
        //         n--;
        //     }else if(s[0]!=s[n-1] && s[n-1]==s[n-2]){
        //         s=s.substr(1,n-1);
        //         n--;
        //     }
        //     cout<<n<<endl;
        //     // cout<<1<<endl;
        // }
        if(palin(s,n)){
            cout<<s<<endl;
            continue;
        }
        sort(s.begin(),s.end());
        int one=0;
        int zero=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                one++;
            }else{
                zero++;
            }
        }
        if(one>=zero){
            s=s.substr(zero,n);
        }else{
            for(int i=0;i<one;i++){
                s.pob();
            }
        }
        cout<<s<<endl;
    }
    // cout<<palin("1001",4)<<endl;
    return 0;
}