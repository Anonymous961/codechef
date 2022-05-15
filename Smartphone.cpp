#include<bits/stdc++.h>
using namespace std;
int sortin(int n,int arr[]){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return arr[n];
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    a[n]=sortin(n,a);
    int temp=a[0];
    for(int i=0;i<n;i++){
        if(a[i]*(i+1)>temp){
            temp=a[i]*(i+1);
        }
    }
    cout<<temp<<endl;
    return 0;
}