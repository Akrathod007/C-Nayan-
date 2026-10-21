#include <stdio.h>

int main()
{
    int m[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j, sc, ec, temp;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        sc = 0;
        ec = 2;

        while (sc < ec)
        {
            temp = m[i][sc];
            m[i][sc] = m[i][ec];
            m[i][ec] = temp;
            sc++; ec--;
        }
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