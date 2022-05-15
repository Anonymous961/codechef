#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,i;
        cin>>a;
        for(i=1;i<a;i++){
            if(i*(i+1)/2>=a){
                break;
            }
        }
        int sum=i*(i+1)/2;
        if(sum-a==1){
            cout<<i+1<<endl;
        }else{
            cout<<i<<endl;
        }
    }
}