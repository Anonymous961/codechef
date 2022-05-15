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
        if(n==1){
            cout<<1<<endl;
        }else if(n<4){
            cout<<n-1<<endl;
        }else{
            cout<<n<<endl;
        }
    }
    return 0;
}