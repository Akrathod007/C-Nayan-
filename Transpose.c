#include <stdio.h>

int main()
{
    int m[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n[3][3];
    int i, j, temp;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    // for (i = 0; i < 3; i++)
    // {
    //     for (j = 0; j < 3; j++)
    //     {
    //         printf("%d ", m[j][i]);
    //     }
    //     printf("\n");
    // }

    // for (i = 0; i < 3; i++)
    // {
    //     for (j = 0; j < 3; j++)
    //     {
    //         n[i][j] = m[j][i];
    //         printf("%d ",n[i][j]);
    //     }
    //     printf("\n");
    // }

    for (i = 0; i < 3; i++)
    {
        for (j = i+1; j < 3; j++)
        {
            temp = m[i][j];
            m[i][j] = m[j][i];
            m[j][i] = temp;
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}