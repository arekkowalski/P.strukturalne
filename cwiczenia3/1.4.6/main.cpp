#include <stdio.h>

using namespace std;

int main()
{
    int n,m,i=1;
    printf("Podaj liczbe calkowita n: ");
    scanf("%d",&n);
    for(m=2;m<=n;m=m+2)
        i=i*m;
        printf("%i", i);
    return 0;
}
