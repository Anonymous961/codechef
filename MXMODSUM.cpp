#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define pob pop_back
using namespace std;
ll stmt(ll a, ll b, ll m)
{
    return a + b+ ((a%m)-(b%m)+m)%m;
}
ll mod(ll a,ll b){
    a=abs(a);
    b=abs(b);
    for(ll i=1;i<=a;i++){
        b*=i;
        if(b>a){
            return b-a;
        }
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        int m;
        cin>>n>>m;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int s=0;
        for(int i=n-1;i>=0;i--){
            if(a[i]!=a[i-1]){
                s=stmt(a[i],a[i-1],m);
                // s=a[i-1]+a[i]+max((a[i]-a[i-1])%m,abs(mod(a[i-1]-a[i],m)));
                // s=a[i-1]+a[i]+abs((a[i-1]-a[i])%m);
                // cout<<a[i-1]<<" "<<a[i]<<" ";
                break;
            }else if(i==0){
                s=a[n-2]+a[n-1]+((a[n-2]-a[n-1])%m);
                cout<<a[i-1]<<" "<<a[i]<<" ";
                break;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}