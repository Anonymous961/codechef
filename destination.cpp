#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int a;
        cin>>a;
        int c=0;
        int s=0;
        for(int i=1;s<a;i++){
            s+=i;
            c++;
        }
        int b=0;
        while(s>=a){
            if(b==2){
                c-=2;
            }
            if(s==a){
                break;
            }
            s--;
            c++;
            b++;
        }
        cout<<c<<endl;
    }
    return 0;
}