#include<stdio.h>
#include<string.h>
int fact(int n);
int multi(int a,int b);
int powi(int x,int y);
int upton(int n);
void oddn(int n,int x);
int main(){
    int a[100],b[100],c[100],n,x,i;
    printf("enter the size of first array:\n");
    scanf("%d",&n);
    printf("enter the elements of first array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the size of second array:\n");
    scanf("%d",&x);
    printf("enter the elements of second array:\n");
    for(i=0;i<x;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<x+n;i++){
        if(i>=n){
            c[i]=b[i-n];
        }else{
            c[i]=a[i];
        }
    }
    for(i=0;i<x+n;i++){
        printf("%d ",c[i]);
    }

    // char s[100];
    // int i,as=1,ds=1;
    // scanf("%s",s);
    // // printf("%s",s);
    // for(i=0;i<strlen(s)-1;i++){
    //     // printf("%c",s[i]);
    //     if(s[i]>s[i+1]){
    //         as=0;
    //         // printf("not sorted ");
    //         // return 0;
    //     }
    // }
    // for(i=0;i<strlen(s)-1;i++){
    //     // printf("%c",s[i]);
    //     if(s[i]<s[i+1]){
    //         ds=0;
    //         // printf("not sorted ");
    //         // return 0;
    //     }
    // }
    // if(as || ds){
    //     printf("sorted");
    // }else{
    //     printf("not sorted");
    // }
    // // printf("%d",s[0]>s[1]);
    // // printf("sorted");
    // return 0;
    // int n;
    // scanf("%d",&n);
    // int a[n];
    // for(int i=0;i<n;i++){
    //     scanf("%d",&a[i]);
    // }
    // int *ptr=&a[0];
    // for(int i=0;i<n;i++){
    //     printf("%u\n",ptr+i);
    //     printf("%u\n",*(ptr+i));
    // }
    // int arr[n][n];
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         scanf("%d",*(arr+i)+j);
            // printf("%d\n",*(arr+i)+j);
    //     }
    // }
    // printf("%d",*(arr+1)+1);
    // int *ptr=&arr[0][0];
    // printf("%u\n",ptr);
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
            // ptr=&arr[i][j];
            // printf("%u\n",ptr);
    //     }
    // }

    // printf("%d\n",*(*(ptr+1)+1));
    // int a[n];
    // for(int i=0;i<n;i++){
    //     scanf("%d",&a[i]);
    // }
    // for (int i=0;i<n;i++){ 
    //     /* code */
    //     printf("%u\n",&a[i]);
    // }
    // printf("%u\n",&a[1]+1);
    // int x,y;
    // printf("Enter two number:\n" );    
    // scanf("%d",&x);
    // printf("%d\n",upton(x));
    // oddn(x,1);
    // int age=5;
    // int *ptr;
    // ptr=&age;
    // printf("%d\n",*ptr);
    // printf("%d\n",ptr);
    // int aa=10;
    // ptr=&aa;
    // printf("%d\n",*ptr);
    // printf("%d\n",ptr);
    return 0;
}
void oddn(int n,int x){
    if(x>n){
        return;
    }
    printf("%d ",x);
    oddn(n,x+2);
}
int upton(int n){
    if(n==0){
        printf("\n");
        return 0;
    }
    printf("%d ",n);
    return upton(n-1)+n;
}
int powi(int x,int y){
    if(y==0){
        return 1;
    }
    return powi(x,--y)*x;
}
int multi(int a,int b){
    if(b==0){
        return 0;
    }
    return multi(a,--b)+a;
}
int fact(int n){
    if(n==1){
        return 1;
    }
    return fact(n-1)*n;
}