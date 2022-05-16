#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string x;
    int a;
    for(int i=0;i<t;i++){
        int c=0;
        cin>>a;
        x=to_string(a);
        for(int j=0;j<x.size();j++){
            if(x[j]=='4'){
                c+=1;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}