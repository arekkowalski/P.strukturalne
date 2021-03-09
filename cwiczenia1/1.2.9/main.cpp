#include <stdio.h>
#include <stdlib.h>
int main()
{
    double number;
    printf("Enter number: ");
    scanf("%lf", &number);
    printf("%f", fabs(number));
    return 0;
}
