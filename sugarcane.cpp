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
        int n,s=0;
        cin>>n;
        s=50*n;
        s-=s*0.7;
        cout<<s<<endl;
    }
    return 0;
}