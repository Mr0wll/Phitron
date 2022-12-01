#include <stdio.h>

int main() 
{
    int n,k;
    scanf("%d %d",&n,&k);
    int ara[n];
    for(int i=1;i<=n;i+=1)
    {
        ara[i]=0;
    }
    for(int i=2,j=1;i<=n;i+=2,j+=1)
    {
        printf("%d ",i);
        ara[j]+=i;
    }
    for(int i=1,j=(n+1)/2;i<=n;i+=2,j+=1)
    {
        printf("%d ",i);
        ara[j]+=i;
    }
    printf("\nThe %dth element of this sequence is %d.",k,ara[k]);
    
    
    return 0;
}
