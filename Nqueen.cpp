#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    if(T>=1 && T<=12){
        for(int j=0;j<T;j++){
        int N;
        cin>>N;
        if(N>=4 && N<=15){
            float f=pow(0.143*N,N);
            if(floor(f)<0.5){
                cout<<0<<endl;
            }else {
                cout<<floor(f)+1<<endl;
            }
        }
        }
    }    
    return 0;
}