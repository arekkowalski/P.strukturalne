#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main()
{
    float a,b,c,delta,x1,x2,pd;
    printf("Podaj wspoczynnik rownania o formacie ax^2+bc+c.\n a-");
    scanf("%f",&a);
    printf("b-");
    scanf("%f",&b);
    printf("c-");
    scanf("%f",&c);
    delta=(b*b)-(4*a*c);
    pd=sqrt(delta);
    if(delta<0) printf("Nie ma rozwiazania tego ukladu w zbiorze liczb rzeczywistych");
    else
    {
            if(delta==0)
            {
                x1=(-b)/(2*a);
                printf("istnieje jedno rozwiazanie x-%f",x1);
            }

        else
        {
            x1=(-b+pd)/(2*a);
            x2=(-b-pd)/(2*a);
            printf("istnieja dwa rozwiazania ukladu rownan. x1-%f x2-%f", x1,x2);
        }
    }
    return 0;
}
