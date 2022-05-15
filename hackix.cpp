#include<bits/stdc++.h>
#include<climits>
using namespace std;
int main(){
    int n=INT_MAX;
    int temp;
    for(int i=0;i<4;i++){
        cin>>temp;
        n=min(temp,n);
    }
    cout<<n<<endl;
    return 0;
}