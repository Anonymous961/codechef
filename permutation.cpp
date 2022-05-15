#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int a=n;
        for(int i=1;i<=n;i++){
            for(int j=0;j<n;j++){
                if(i==arr[j]){
                    a--;
                    break;
                }
            }
        }
        cout<<a<<endl;
    }
    return 0;
}