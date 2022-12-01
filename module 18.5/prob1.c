#include <stdio.h>
int main()
{   
    int a;
    scanf("%d",&a);
    
    if (a >=1)
    {
        int j=a;
        while(j>=0)
        {
            printf("%d ",j);
            j--;
        }
        for (int k=-1; k>=-a; k--)
        {
            printf("%d ",k);
        }
    }
    else if (a <=-1)
    {
        int j=a;
        while(j<=0)
        {
            printf("%d ",j);
            j++;
        
        }
        for(int z=1;z<=-a;z++)
            printf("%d ",z);
    }
    else
        printf("%d ",a);
    
    
    
    
    
}