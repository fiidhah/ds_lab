#include<stdio.h>
int main()
{
        int n1,n2,i,j;
        printf("enter the size of first array:");
        scanf("%d",&n1);
        int A[n1];
        printf("enter %d elements for first array:\n",n1);
        for(i=0;i<n1;i++)
        {
                scanf("%d",&A[i]);
        }
        printf("enter the size of second array:");
        scanf("%d",&n2);
        int B[n2];
        printf("enter %d elements of the second array:\n",n2);
        for(i=0;i<n2;i++)
        {
                scanf("%d",&B[i]);
        }
        int C[n1+n2];
        for(i=0;i<n1;i++)
        {
                C[n1+j]=B[j];
        }
        printf("Merged array:\n");
        for(i=0;i<n1+n2;i++)

        {
                printf("%d",C[i]);
        }
        return 0;
}

