#include<bits/stdc++.h>
#include<cmath>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define pob pop_back
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        cout<<fabs(y-x)<<endl;
    }
    return 0;
}