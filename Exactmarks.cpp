#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int N,X;
        cin>>N>>X;
        int A=0,B=0,C=0;
        int sum=0;
        while(N && sum<X){
            sum+=3;
            A++;
            N--;
        }
        while(N && sum>X){
            sum--;
            B++;
            N--;
        }
        if(sum==X){
            C=N;
            cout<<"YES"<<endl;
            cout<<A<<" "<<B<<" "<<C<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}