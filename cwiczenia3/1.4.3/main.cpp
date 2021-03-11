#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m ,k;
    scanf("%d %d %d", &n, &m, &k);
    for(int i=m; i<k; i++)
    {
    if(n*i>m && n*i<k)
        printf("\n %d", n*i);
    }
    return 0;
}
