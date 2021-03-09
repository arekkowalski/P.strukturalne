#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int w;
    double bok1, bok2, bok3, h, p, s;
    printf("Wpisz:\n");
    printf("1 - jesli chcesz podac dl. trzech bokow\n");
    printf("2 - jesli chcesz podac dl. podstaw i wysokosc.\n");
    scanf("%d", &w);
    if(w - 1){
        printf("Podaj dlugosc podstawy trojkata: ");
        scanf("%lf" , &bok1);
        printf("Podaj wysokosc trojkata: ");
        scanf("%lf", &h);
        p=bok1*h/2;
    }
    else{
        printf("Podaj dlugosc pierwszego boku trojkata: ");
        scanf("%lf",&bok1);
        printf("Podaj dlugosc drugiego boku trojkata: ");
        scanf("%lf",&bok2);
        printf("Podaj dlugosc trzeciego boku trojkata: ");
        scanf("%lf",&bok3);
        s=(bok1 + bok2 + bok3) /2;
        p=sqrt(s * (s - bok1) * (s - bok2) * (s - bok3));
    }
    printf("Pole trojkata o podanych wymiarach wynosi %f", p);
    return 0;
}
