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
        int a,b,c,d;
        cin>>a>>b;
        cin>>c>>d;
        if(c>=a && d>=b){
            cout<<"POSSIBLE"<<endl;
        }else{
            cout<<"IMPOSSIBLE"<<endl;
        }
    }
    return 0;
}