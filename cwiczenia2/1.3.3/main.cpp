#include <stdio.h>

using namespace std;

int main()
{
    int a,b,c , max;
	scanf("%i %i %i" , &a , &b , &c);
	if(a>=max) max=a;
	if(b>=max) max=b;
	if(c>=max) max=c;
	printf("MAX %i",max);
	return 0;
}
