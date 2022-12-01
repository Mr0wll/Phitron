#include <stdio.h>
int sum(int x, int y);
int main()
{
    int a,b,z;
    scanf("%d %d",&a,&b);
    z=sum(a,b);
    printf("sum: %d",z);
}

int sum(int x, int y)
{
    return x+y;
}