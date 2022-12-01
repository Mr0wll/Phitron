#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a,b,c;
    int* p;
    int* q;
    int* r;
    p=&a;
    q=&b;
    r=&c;
    scanf("%d %d %d",p,q,r);
    printf("%d",(*p)+(*q)+(*r));
}

