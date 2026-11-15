#include <stdio.h>
int main()
{
    int n, i = 100;
    int sum = 0;

    printf("Enter the last term: ");
    scanf("%d", &n);

    do
    {
        sum = sum + i * i;
        i = i - 10;
    }
    while (i >= n);

    printf("Sum = %d", sum);

    return 0;
}
