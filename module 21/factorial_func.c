#include <stdio.h>
int factorial(int x);
int main()
{
    printf("Enter a number: ");
    int a,z;
    scanf("\n%d",&a);
    z=factorial(a);
    printf("%d",z);


}
int factorial(int x)
{
    int fact=1;
    while(x>=1)
    {
        fact*=x;
        x--;
    }
    return fact;
}