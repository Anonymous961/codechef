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
        ll n,k;
        cin>>n>>k;
        if(k){
            if(n%4!=0){
                cout<<"Ambiguous"<<endl;
            }else{
                cout<<"On"<<endl;
            }
        }else{
            if(n%4==0){
                cout<<"Off"<<endl;
            }else{
                cout<<"On"<<endl;
            }
        }
    }
    return 0;
}