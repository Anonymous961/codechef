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
        int a,b,m,s;
        cin>>a>>b>>m;
        s=min(abs(b-a),m-abs(b-a));
        cout<<s<<endl;
    }
    return 0;
}