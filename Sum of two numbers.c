// Sum of two numbers

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a, b, x, y, sum, diff;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum : %d\n", sum);
    diff = a - b;
    printf("Difference : %d\n", diff);
    return 0;
}
