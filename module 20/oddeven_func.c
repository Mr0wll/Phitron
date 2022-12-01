#include<stdio.h>
int oddevenFunc(int x);
int main()
{
    int a,z;
    printf("Enter a random number: ");
    scanf("\n%d",&a);
    z=oddevenFunc(a);
    if (z==0) printf("Odd");
    else printf("Even");
}
int oddevenFunc(int x)
{
    if(x%2==0) return 1;
    else return 0;
}