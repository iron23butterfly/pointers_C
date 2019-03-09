// Using Function Pointer

#include <stdio.h>

int compare(int n1, int n2)
{
    /*
    // ascending order sort
    if(n1>n2) return 1;
    else return -1;
    */
    
    ///*
    // descending order sort
    if(n1>n2) return -1;
    else return 1;
    //*/
}

void bubbleSort(int *A, int len, int (*compare)(int,int))
{
    int i,j,temp;
    for(i=0;i<len;i++)
    {
        for(j=0;j<(len-1);j++)
        {
            if (compare(A[j],A[j+1])>0)
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
            printf(" %d ", A[j]);
            //printf("j %d ", j);
        }
        //printf("%d ", A[i]);
        //printf("i %d ", i);
        printf("\n");
    }
}

int main()
{
    int i, A[] = {3,2,1,5,6,4};
    bubbleSort(A,6,compare);
    printf("\n");
    for(i=0;i<6;i++) 
        printf("%d ",A[i]);
}

/* 
OUTPUT

 3  2  5  6  4                                                                                                                 
 3  5  6  4  2                                                                                                                 
 5  6  4  3  2                                                                                                                 
 6  5  4  3  2                                                                                                                 
 6  5  4  3  2                                                                                                                 
 6  5  4  3  2                                                                                                                 
                                                                                                                               
6 5 4 3 2 1
*/
