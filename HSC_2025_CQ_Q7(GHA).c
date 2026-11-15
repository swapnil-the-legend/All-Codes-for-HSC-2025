#include <stdio.h>
int main()
{
    int year;

    printf("Enter your birth year: ");
    scanf("%d", &year);

    if (year >= 1950 && year <= 1980)
    {
        printf("Group-A");
    }
    else if (year >= 1981 && year <= 2000)
    {
        printf("Group-B");
    }
    else if (year >= 2001 && year <= 2025)
    {
        printf("Group-C");
    }
    else
    {
        printf("Invalid Year");
    }

    return 0;
}
