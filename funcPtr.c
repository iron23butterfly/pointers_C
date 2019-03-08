#include <stdio.h>

int Add(int a, int b)
{
    return a+b;
}

int main()
{
    int (*p)(int, int);
    p = Add;
    int c;
    c = p(2,3);
    //c = Add(2,3);
    printf("\nc = %d", c);
    printf("\np = %d", p);
    printf("\n*p = %d", *p);
    int d;
    d = Add(10,20);
    printf("\nd = %d", d);
    return 0;
}

/*
OUTPUT 

c = 5                                                                                                                          
p = 4195638                                                                                                                    
*p = 4195638                                                                                                                   
d = 30
*/
