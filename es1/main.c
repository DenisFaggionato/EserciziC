#include <stdio.h>

int main()
{
    int a, b, c;

    printf("insdeire lato a: ");
    scanf("%i", &a);


    printf("insdeire lato b: ");
    scanf("%i", &b);

    printf("insdeire lato c: ");
    scanf("%i", &c);

    if(a>b && a>c){
        if(c*c + b*b == a*a){
            printf("SIIIII");
                            return 0;

        }


    }
        else if(b>a && b>c){
        if(c*c + a*a == b*b){
            printf("SIIIII");
                            return 0;

        }


    }
    else {
        if(c*c == b*b + a*a){
            printf("SIIIII");
            return 0;


        }
    }
    printf("NOOOOO");

}