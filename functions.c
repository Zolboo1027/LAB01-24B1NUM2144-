#include "myinclude.h"

void read(int A[], int n)
{
        int i;
        for (i = 0; i < n; i++)
                scanf("%d", &A[i]);
}

void print(int A[], int n)
{
        int i;
        for (i = 0; i < n; i++)
                printf("%d ", A[i]);
        printf("\n");
}

int max(int A[], int n)
{
        int max = A[0];
        for (int i = 0; i < n; i++){
                if(A[i]>max){
                        max = A[i];        
                }
        }
        return max;
}

int min(int A[], int n)
{
        int min = A[0];
        for(int i=0; i<n; i++){
                if(A[i]<min){
                         min = A[i];
                }
        }        
        return min;       
}

void copy(int A[], int n, int B[])
{
        for (int i = 0; i < n; i++){
                B[i] = A[i];
        }        
}

int find(int A[], int n, int x)
{
        for (int i = 0; i < n; i++)
        {
                if(x == A[i]){
                        return i;
                }
        }
        return -1;        
}

int make_set(int A[], int n, int B[])
{
        int m=0;
        for (int i = 0; i < n; i++)
        {
                int found=0;
                        for(int j = 0; j<m; j++){
                                
                                if(A[i]==B[j]){
                                        found = 1;
                                        break;
                                }
                        }
                if(found == 0){
                        B[m] = A[i];
                        m++;
                }
                
        }
        return m;        
}

int union_set(int A[], int n, int B[], int m)
{
for (int i = 0; i < m; i++)
        {
                int found = 0;
                        for (int k = 0; k < n; k++)
                        {
                                if (B[i] == A[k]){
                                        found = 1;
                                        break;
                                }
        }

        if (found == 0){
            A[n] = B[i];
            n++;
        }
    }

    return n;} 

int intersection_set(int A[], int n, int B[], int m, int C[])
{
       int k = 0;
        for (int i = 0; i < n; i++){
                int found = 0;

                for (int j = 0; j < m; j++)
                {
                if (A[i] == B[j]){
                        found = 1;
                         break;
                        }
                        }

        if (found == 1)
        {
            C[k] = A[i];        
            k++;
        }
    }

    return k;
        
}
