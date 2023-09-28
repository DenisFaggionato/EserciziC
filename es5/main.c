#include <stdio.h>
#include <stdbool.h>

void bubbleSort(int arr[], int n) {
    bool scambio;
    do {
        scambio = false;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                scambio = true;
            }
        }
    } while (scambio);
}

int main() {
    int a[5] = {1,23,43,56,98};
    int b[5] = {2,21,67,89,99};
    int fuso[10];

    for(int i=0; i<10; i++){
        if(i<5)
            fuso[i] = a[i];
        else
            fuso[i] = b[i-5];


    }
    printf("Non ordinato:");
    for(int i=0; i<10; i++){
        printf("%i \t", fuso[i]);
    }

    bubbleSort(fuso, 10);
    printf("\n Ordinato:");

    for(int i=0; i<10; i++){
        printf("%i \t", fuso[i]);
    }
    return 0;
}
