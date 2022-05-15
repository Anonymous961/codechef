#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        if(i+1!=temp){
            cout<<i+1<<endl;
            break;
        }
    }
    return 0;
}