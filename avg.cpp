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
        int n,k,v,sum=0;
        cin>>n>>k>>v;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        int ans=(((n+k)*v)-sum)/k;
        if(ans>0 && (((ans*k)+sum)/(n+k))==v){
            cout<<ans<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
    return 0;
}