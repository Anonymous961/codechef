#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int c=0;
        for(int i=0;i<n/2;i++){                   
            if(s[i]!=s[n-1-i]){
                c++;
                s[i]=s[n-1-i];
            }
        }
        if(k>=c){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }            
    }
    return 0;
}