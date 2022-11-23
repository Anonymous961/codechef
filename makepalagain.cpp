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

int main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        int n,x=0;
        cin>>n;
        string s;
        cin>>s;
        string s1="",s2="";
        // set<int, greater<int> >::iterator itr;
        for(int i=0;i<n;i+=2){
            // v.insert({s[i],);
            s1+=s[i];
            s2+=s[i+1];
        }
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        // cout<<s1<<" "<<s2<<endl;
        if(s1==s2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}