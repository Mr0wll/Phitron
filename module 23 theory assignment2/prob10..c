#include <stdio.h>
char mark(int x)
{
    if (x>=80 && x<=100) return 'A';
    else if (x>=60 && x<=79) return 'B';
    else if (x>=40 && x<=59) return 'C';
    else if (x>=0 && x<=39) return 'F';
}
int main()
{
    int x;
    char s;
    scanf("%d", &x);
    s=mark(x);
    printf("%c",s);
    
}