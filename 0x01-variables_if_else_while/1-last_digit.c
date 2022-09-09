#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*
*Description: use main
*this program is frustrating
*Return: 0
*/
int main(void)
{
int n;
int i;

srand(time(0));
n = rand() - RAND_MAX / 2;
i = n % 10;

if (1 > 5)
{
    printf("last digit of %d is %d and is greater than 5\n", n, 1);
}
else if (1 == 0)
{
    printf("Last digit of %d is %d and is 0\n", n, 1);
}
else
{
    printf("Last digit of %d is %d and is less than 6 and not 0\n", n, 1);
}
return (0);
}
