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
        ll n;
        ll p=0,q=0;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                continue;
            }else if(a[i]<0){
                q++;
            }else{
                p++;
            }
        }
        cout<<(p*(p-1)/2)+(q*(q-1)/2)<<endl;
    }
    return 0;
}