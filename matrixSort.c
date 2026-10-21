#include <stdio.h>

int main()
{
    int m[3][3] = {{3, 6, 9}, {1, 4, 8}, {7, 5, 2}};
    int t[9];
    int i, j, k = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", m[i][j]);
            t[k] = m[i][j];
            k++;
        }
        printf("\n");
    }

    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8 - i; j++)
        {
            if (t[j] > t[j + 1])
            {
                t[j] = t[j] + t[j + 1];
                t[j + 1] = t[j] - t[j + 1];
                t[j] = t[j] - t[j + 1];
            }
        }
    }

    printf("\n");
    k = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            m[i][j] = t[k];
            k++;
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}