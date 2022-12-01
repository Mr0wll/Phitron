#include <stdio.h>
void evenprinter(int x);
int main()
{   
    int a;
    scanf("%d",&a);
    evenprinter(a);
}
void evenprinter(int x)
{
    int i=2;
    while (i<=x)
    {
        printf("%d ",i);
        i+=2;
    }
}