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
        int x;
        cin>>x;
        int arr[3];
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
        int c=0;
        while(arr[x-1]!=0){
            x=arr[x-1];
            c++;
        }
        if(c==2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}