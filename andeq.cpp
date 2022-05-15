#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define pob pop_back
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,c=0;
        cin>>n;
        ll a[n];
        vi v;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            v.push_back(a[i]);
        }
        for(ll i=1;i<n;i++){
            if(v[0]!=v[i]){
                v[0]=v[i]&v[0];
                swap(v[i],v[i+1]);
                c++;
            }
        }
        if(c>4){
            cout<<c-1<<endl;
        }else{
        cout<<c<<endl;
        }
    }
    return 0;
}