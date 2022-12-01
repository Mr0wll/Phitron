#include <stdio.h>
void funk(int x);
int main()
{
    int a,z;
    scanf("%d",&a);
    funk(a);
}
void funk(int x)
{
    if (x>0)
    {
        for (int i=x; i>=0;i--)
        {
            printf("%d ",i);
        }
        for (int i=-1; i>=-x;i--)
        {
            printf("%d ",i);
        }
    }
    else
    {
        for(int i=x;i<=0;i++)
        {
            printf("%d ",i);
        }
        for (int i=1; i<=(-1)*x;i++)
        {
            printf("%d ",i);
        }
    }
}
