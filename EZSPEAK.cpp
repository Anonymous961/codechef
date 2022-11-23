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
        int n,c=0;
        cin>>n;
        string s;
        cin>>s;
        bool flag=1;
        // string v[5]={'a','e','i','o','u'};
        for(int i=0;i<n;i++){
            if(!(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')){
                c++;
            }else{
                c=0;
            }
            if(c==4){
                cout<<"NO"<<endl;
                flag=0;
                break;
            }
        }
        if(flag==1){
        cout<<"YES"<<endl;
        }
    
    
    }
    return 0;
}