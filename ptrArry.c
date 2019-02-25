int main()
{
    int a[] = {2,4,5,8,1};
    int i;
    int *p = a;
    
    /*
    a[] --> array
    a   --> indicates the address of the first array element
    *a  --> indicates the value stores as the first elemnt in array
    */
    
    for (i=0;i<5; i++)
    {
        printf("\naddress %d",&a[i]);
        printf("\naddress %d", a+i);
        printf("\nvalue %d", a[i]);
        printf("\nvalue %d", *(a+i));
        printf("\n");
    }
}

/*
OUTPUT

address -760609632                                                                                                               
address -760609632                                                                                                               
value 2                                                                                                                          
value 2                                                                                                                          
                                                                                                                                 
address -760609628                                                                                                               
address -760609628                                                                                                               
value 4                                                                                                                          
value 4                                                                                                                          
                                                                                                                                 
address -760609624                                                                                                               
address -760609624                                                                                                               
value 5                                                                                                                          
value 5                                                                                                                          
                                                                                                                                 
address -760609620                                                                                                               
address -760609620                                                                                                               
value 8                                                                                                                          
value 8                                                                                                                          
                                                                                                                                 
address -760609616                                                                                                               
address -760609616                                                                                                               
value 1                                                                                                                          
value 1
*/
