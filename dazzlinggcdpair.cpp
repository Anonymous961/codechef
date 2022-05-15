#include<bits/stdc++.h>
// #define ll long long int
// #define vi vector<int>
// #define pb push_back
// #define pob pop_back
using namespace std;
// int gcd(int a,int b){
//     while(b!=0){
//         int rem=a%b;
//         a=b;
//         b=rem;
//     }
//     return a;
// }
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        // bool flag=1;
        // for(int i=a+1;i<=b;i++){
        //     if(gcd(a,i)>1){
        //         cout<<a<<" "<<i<<endl;
        //         flag=0;
        //         break;
        //     }
        // }
        if(a%2==0){
            if(a+2<=b){
                cout<<a<<" "<<a+2;
            }else{
                cout<<-1;
            }
        }else if(a%3==0){
            if(a+3<=b){
                cout<<a<<" "<<a+3;
            }else{
                cout<<-1;
            }
        }else{
            if(a+3<=b){
                cout<<a+1<<" "<<a+3;
            }else{
                cout<<-1;
            }
        }
        cout<<endl;
    }
    return 0;
}