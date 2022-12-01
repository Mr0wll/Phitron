#include <stdio.h>
void sort(int ara[],int n);
float medi(int ara[],int n);
int main()
{
    int n;
    scanf("%d",&n);
    int ara[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    int i=0;
    float median=0;
    median= medi(ara,n);
    printf("Median ---> %f\n",median);
    return 0;
}

void sort(int ara[],int n)
{
    int  c=0;
    for(int i=0; i<n; i+=1)
    {
        for(int j=0; j<n-1; j+=1)
        {
            if(ara[j]>ara[j+1])
            {
                c=ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=c;
            }
        }
    }
}
float medi(int ara[],int n)
{

    float median=0;

    sort(ara,n);
    if(n%2==0)
        median=(ara[(n-1)/2]+ara[n/2])/2.0;

    else
        median=ara[n/2];

    return median;
}
