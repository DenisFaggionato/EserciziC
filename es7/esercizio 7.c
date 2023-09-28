#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p;
    int n,g=10;
    p = malloc(g* sizeof(int));
    p[0]=5,p[1]=12,p[2]=17,p[3]=23,p[4]=89,p[5]=66,p[6]=5,p[7]=2,p[8]=10,p[9]=3;
    printf("vecchio inserisci il numero \n");
    scanf("%i",&n);
    int i;
    for(i=0 ;i<g;i++){
        if( p[i] == n){
            break;
        }
    }
    printf("il numero è all'indice %i", i);

    return 0;

}