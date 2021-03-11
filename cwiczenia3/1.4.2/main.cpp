#include <stdio.h>

using namespace std;

int main()
{
    int i,n,m;
    printf("Podaj liczbe calkowita n: ");
    scanf("%d",&n);
    printf("Podaj liczbe calkowita m: ");
    scanf("%d",&m);
    for(int i=0; i<m ; i++)
        printf("%d\n", n*(i+1));
    return 0;
}
