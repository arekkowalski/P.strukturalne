#include <stdio.h>

int main()
{
    int n,sum=0;
    printf("Podaj liczbe calkowita n: ");
    scanf("%d",&n);
    for(int i=1;i<n+1;i++)
        sum+=i*i;
        printf("%i", sum);
    return 0;
}
