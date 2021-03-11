#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    double a,b,wynik;
    char n;
    scanf("%lf %c %lf", &a,&n,&b);
    if(n=='+' || n=='-' || n=='*' || n=='/');
    {
        switch(n)
        {
            case '+':
                wynik = a+b;
                break;
            case '-':
                wynik = a-b;
                break;
            case '*':
                wynik = a*b;
                break;
            case '/':
                wynik = a/b;
                break;
        }
        printf(" = %f", wynik);
        return 0;
    }
    printf("Nieodowiedni operator arytmetyczny");
    return 0;
}
