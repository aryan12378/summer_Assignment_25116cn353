#include <stdio.h>

int main()
{

    int n, i, j, k;

    printf("enter n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (k = 0; k < i - 1; k++)
        {
            printf(" ");
        }
        for (j = 2*(n - i) + 1; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}