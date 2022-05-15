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
        cin>>n;
        ll a[n];
        int c=0;
        int two=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1 || a[i]==0){
                c++;
            }
            if(a[i]==2){
                two++;
            }
        }
        cout<<c*(n-1)+(two*(two-1))/2<<endl;
    }
    return 0;
}