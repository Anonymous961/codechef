#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        int N;
        cin>>N;
        int c;
        if(N%7>5){
            cout<<(N/7)+1<<endl;
        }else{
            cout<<N/7<<endl;
        }
        // cout<<((N+8)/7)-1<<endl; suggested by prem
    }
    return 0;
}