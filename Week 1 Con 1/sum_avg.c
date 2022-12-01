#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    int sum= a+b+c;
    printf("Sum = %d\n",sum);
    float average= (float)sum/3;
    printf("Average = %f\n",average);
    return 0;
    
}