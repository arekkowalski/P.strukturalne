#include <stdio.h>

using namespace std;

int main()
{
    int n,i,silnia=1;
    printf("Podaj liczbe calkowita n: ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
        silnia *=i;
        printf("%d!: %d\n", n, silnia);
    return 0;
}
