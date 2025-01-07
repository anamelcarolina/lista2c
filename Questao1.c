#include <stdio.h>

int main(){
    int array[10];
    for (int i = 0; i < 10; i++){
        scanf("%d", &array[i]);
    }
    printf("%d %d %d %d %d %d %d %d %d %d\n", array[0], array[1], array[2], array[3], array[4], array[5], array[6], array[7], array[8], array[9]);
    for (int i = 0; i < 10; i++){
        if (i == 10){
            array[i] = array[i] + array[0];
        } else {
            array[i] = array[i] + array[i+1];
        }
    }
    printf("%d %d %d %d %d %d %d %d %d\n", array[0], array[1], array[2], array[3], array[4], array[5], array[6], array[7], array[8]);
    for (int i = 0; i < 9; i++){
        if (i == 9){
            array[i] = array[i] + array[0];
        } else {
            array[i] = array[i] + array[i+1];
        }
    }
    printf("%d %d %d %d %d %d %d %d\n", array[0], array[1], array[2], array[3], array[4], array[5], array[6], array[7]);
    for (int i = 0; i < 8; i++){
        if (i == 9){
            array[i] = array[i] + array[0];
        } else {
            array[i] = array[i] + array[i+1];
        }
    }
    printf("%d %d %d %d %d %d %d\n", array[0], array[1], array[2], array[3], array[4], array[5], array[6]);
    for (int i = 0; i < 7; i++){
        if (i == 9){
            array[i] = array[i] + array[0];
        } else {
            array[i] = array[i] + array[i+1];
        }
    }
    printf("%d %d %d %d %d %d\n", array[0], array[1], array[2], array[3], array[4], array[5]);
    for (int i = 0; i < 6; i++){
        if (i == 9){
            array[i] = array[i] + array[0];
        } else {
            array[i] = array[i] + array[i+1];
        }
    }
    printf("%d %d %d %d %d\n", array[0], array[1], array[2], array[3], array[4]);
    for (int i = 0; i < 5; i++){
        if (i == 9){
            array[i] = array[i] + array[0];
        } else {
            array[i] = array[i] + array[i+1];
        }
    }
    printf("%d %d %d %d\n", array[0], array[1], array[2], array[3]);
    for (int i = 0; i < 4; i++){
        if (i == 9){
            array[i] = array[i] + array[0];
        } else {
            array[i] = array[i] + array[i+1];
        }
    }
    printf("%d %d %d\n", array[0], array[1], array[2]);
    for (int i = 0; i < 3; i++){
        if (i == 9){
            array[i] = array[i] + array[0];
        } else {
            array[i] = array[i] + array[i+1];
        }
    }
    printf("%d %d\n", array[0], array[1]);
    for (int i = 0; i < 2; i++){
        if (i == 9){
            array[i] = array[i] + array[0];
        } else {
            array[i] = array[i] + array[i+1];
        }
    }
    printf("%d\n", array[0]);
    return 0;
}
