#include<stdio.h>
void main()
{
int A[10][10],B[10][10],i,j,m,n,*p;
    p=&A[0][0];
    scanf("%d %d", &m, &n);
    printf("enter elements for A matrix");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",p++);
        }
    }
    p=&A[0][0];
    int *pp=&B[0][0];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",pp);
            *p=(*p)+(*pp);
            p++;pp++;
        }
    }
    p=&A[0][0];
    // int *pp=&B[0][0];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",*p++);
            
        }
        printf("\n");
    }
}