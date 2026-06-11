#include <stdio.h>

int main()
{

    int n, i, j, k, l, m;

    printf("enter n : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (k = n - i; k >= 0; k--)
        {
            printf(" ");
        }

        for (l = 1; l <= i; l++)
        {

            printf("%d", l);
        }
        for (m = i - 1; m >= 1; m--)
        {

            printf("%d", m);
        }

        printf("\n");
    }

    return 0;
}