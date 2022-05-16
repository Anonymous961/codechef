#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int j=0;j<T;j++){
        int N;
        cin>>N;
        int c=(N%2==0)?N/2:(N/2)+1;
        cout<<c<<endl;
    }
    return 0;
}