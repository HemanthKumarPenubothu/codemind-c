#include <stdio.h>

int isPerfectSquare(int number)
{
    int root = 0;
    while (root * root <= number)
    {
        if (root * root == number)
            return 1;
        root++;
    }
    return 0;
}

int main()
{
    int n, i, sum = 0;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (isPerfectSquare(a[i]) == 1)
        {
            sum += a[i];
        }
    }
    printf("%d", sum);

    return 0;
}
