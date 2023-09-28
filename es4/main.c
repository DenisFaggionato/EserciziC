#include <stdio.h>
#include <stdbool.h>

int main() {
    int a,b=0;


    while(true){
        printf("Inserisci un numero pls_ ");
        scanf("%i", &a);
        if(a==b)
            return 0;
        b=a;
    }
    return 0;
}