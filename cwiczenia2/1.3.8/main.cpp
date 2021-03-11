#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main()
{
    int w,bok1,bok2,bok3,p,P;
    printf("wybierz:\n1-kwadrat\n2-prostokat\n3-trojkat\n");
    scanf("%d",&w);
    if(w==1){
        printf("Podaj bok kwadratu:\n");
        scanf("%d",&bok1);
        P = bok1*bok1;
    }
    if(w==2){
        printf("Podaj bok prostokata:\n");
        scanf("%d" "&d",&bok1,&bok2);
        P = bok1*bok2;
    }
    if(w==3){
        printf("Podaj boki trojkata:\n");
        scanf("%d" "&d" "%d",&bok1,&bok2,&bok3);
        p = (bok1+bok2+bok3)/2;
        p = sqrt(p*(p-bok1)*(p-bok2)*(p-bok3));
    }
    printf("Pole figury wynosi: %d", P);
    return 0;
}
