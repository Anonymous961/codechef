#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    if(t>=1 && t<=1000){
        for(int j=0;j<t;j++){
            int n,k;
            cin>>n>>k;
            if(n>=1 && n<=1000 && k>=0 && k<=n){
                string s;
                cin>>s;
                int c=0;
                for(int i=0;i<n/2;i++){
                    if(s[i]!=s[n-1-i]){
                        c++;
                    }
                }
                if(k>=c){
                    cout<<"YES\n";
                }else{
                    cout<<"NO\n";
                }
            }
            
        }
    }
    
    return 0;
}