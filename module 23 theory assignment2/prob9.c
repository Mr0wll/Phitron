#include <stdio.h>
int main() 
{
    int n[3][3],transpose[3+1][3+1], row, col;

    scanf("%d %d", &row,&col);

    for (int i=0;i<row;i+=1)
    for (int j=0;j<col;j+=1) 
    {
        scanf("%d", &n[i][j]);
    }

    for (int i = 0; i < row;i+=1)
        for (int j = 0; j < col;j+=1)
        {
            transpose[j][i]=n[i][j];
        }

    printf("\n");
    for (int i=0;i<col;i+=1)
        for (int j=0;j<row;j+=1) 
        {
            printf("%d  ", transpose[i][j]);
            if (j==row-1)
            printf("\n");
        }
    return 0;
}



