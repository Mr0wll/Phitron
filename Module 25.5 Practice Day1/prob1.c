#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int n,m,count=0;
    scanf("%d",&n);
    int ara[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    scanf("%d",&m);
    for(int i=0;i<n;i++)
    {
        if(ara[i]!=m) count++;
    }
    printf("%d\n",count);
}

