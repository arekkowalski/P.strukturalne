#include <stdio.h>

using namespace std;

int main()
{
    int i,n,m;
    printf("Podaj liczbe calkowita n: ");
    scanf("%d",&n);
    printf("Podaj liczbe calkowita m: ");
    scanf("%d",&m);
    for(i - n; i < m ; i += n)
        printf("%d\n", i);
    return 0;
}
