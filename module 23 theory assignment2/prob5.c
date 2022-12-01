#include <stdio.h>
#include<string.h>
int add_three_nums(int a, int b, int c);
int main() {
   int a,b,c=0;
   scanf("%d %d",&a,&b);
   printf("%d",add_three_nums(a,b,c));

    return 0;
}
int add_three_nums(int a, int b, int c)
{
	return a+b+c;
}
