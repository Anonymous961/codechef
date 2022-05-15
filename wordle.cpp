#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        string S;
        string T;
        cin>>S>>T;
        for(int i=0;i<5;i++){
            if(S[i]==T[i]){
                T[i]='G';
            }else{
                T[i]='B';
            }
        }
        cout<<T<<endl;
    }
    return 0;
}