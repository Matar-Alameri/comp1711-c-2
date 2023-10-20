#include<stdio.h>

float sum(int a, int b){

    float answer;
    answer = a-b;
    return answer;
}

int main(){

    int y = 2;
    float x = sum(5, y); //calling our new function

    printf("5 take away %d is %.2f\n", y, x);
}