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
        int a,b;
        cin>>a>>b;
        a=a*10;
        b*=5;
        if(a==b){
            cout<<"ANY"<<endl;
        }else if(a>b){
            cout<<"FIRST"<<endl;
        }else{
            cout<<"SECOND"<<endl;
        }
    }
    return 0;
}