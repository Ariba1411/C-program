#include<stdio.h>

int main()
{
    int n, i;
    float sum = 1;

    scanf("%d", &n);

    for(i=2; i<=n; i=i+2)
    {
        sum = sum + (1.0/i);
    }

    printf("Sum = %f", sum);

    return 0;
}