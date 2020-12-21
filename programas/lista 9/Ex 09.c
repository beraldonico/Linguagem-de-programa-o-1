#include <stdio.h>

float getAvg(int *arr, int size);

int main(){
    int v[5] = {20, 30, 10, 20, 20};
    double avg;

    avg = getAvg( v, 5);

    printf("Valor medio e : %.2f\n", avg);

    return 0;
}
float getAvg(int *arr, int size){
    int i, sum = 0;
    float avg;

    for(i = 0; i < size; i++){
        sum += arr[i];
    }

    avg = (float) sum / size;

    return avg;
}
