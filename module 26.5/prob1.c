#include <stdio.h>
int main()
{
    int a,b;
    int* p=&a;
    int* q=&b;
    scanf("%d %d",p,q);
    printf("%.3f",((*p)+(*q))/2.00);
    
    
}