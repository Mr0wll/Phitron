#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    int largest=ara[0];
    for(i=0;i<n;i++)
    {
        if(ara[i]>largest)largest=ara[i];
    }
    int final_ara[largest+1];
    for (i=0;i<=n;i++)
    {
        final_ara[i]=0;
    }
    
    for (i=0;i<=n;i++)
    {
        final_ara[ara[i]]+=1;
    }
    int count=0;
    for (i=largest;i>=1;i--)
    {
        if(final_ara[i]==1)
        {
            count+=1;
        }
        if (count==3)
        {
            printf("3rd largest value is : %d",i);
            break;
            
        }
    }    
    
    
    
    
    
    
}