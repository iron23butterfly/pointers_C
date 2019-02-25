void doubleArrayElements (int arraySize, int *firstAddr)
{
    int i;
    
    for (i=0;i<arraySize;i++)
    {
        firstAddr[i] = firstAddr[i]*2;
        //printf("%d\t", *firstAddr);
    }
}

void    main ()
{
    int a[] = {1,2,3,4,5};
    int i;
    int size = sizeof(a)/sizeof(int);
 
    printf("\n");
    for (i=0;i<size;i++)
    {
        printf("%d\t", a[i]);
    }
 
    doubleArrayElements(size, a);
    
    printf("\n");
    for (i=0;i<size;i++)
    {
        printf("%d\t", a[i]);
    }
}

/*
OUTPUT

1 2 3 4 5
2 4 6 8 10

*/
