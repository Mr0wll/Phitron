//codwe hoynai//
#include <stdio.h>
int lov(int x);
int main()
{
    int a,z;
    scanf("%d",&a);
    z=lov(a);
    printf("Sum = %d",z);
}
int lov(int x)
{
    int ara[x];
    int sum = 0;
    for (int i=0;i<x;i++)
    {
        scanf("%d",ara[i]);   
    }
    for (int i=0;i<x;i++)
    {
        sum+=ara[i]/1000;
        sum+=ara[i]%10;    
    }
    return sum;
        
}