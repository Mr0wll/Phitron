#include <stdio.h>
int largecheck(int x, int y, int z);
int main()
{
    int x, y, z,m;
    printf("Enter 3 numbers:\n");
    scanf("%d %d %d", &x, &y, &z);
    m=largecheck(x, y, z);
    printf("Largest number is \t%d",m);
}
int largecheck(int x, int y, int z)
{
    if (x>y && x>z) return x;
    else if (y>x && y>z) return y;
    else return z;
}


