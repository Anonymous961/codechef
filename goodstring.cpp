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
        string s,x,y;
        cin>>s;
        // cout<<s.substr(2,3)<<endl;
        int n=s.size();
        if(n%2==0){
            x=s.substr(0,n/2);
            y=s.substr(n/2,n/2);
            sort(x.begin(),x.end());
            sort(y.begin(),y.end());
            if(x==y){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            x=s.substr(0,n/2);
            y=s.substr(n/2+1,n/2);
            sort(x.begin(),x.end());
            sort(y.begin(),y.end());
            if(x==y){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}